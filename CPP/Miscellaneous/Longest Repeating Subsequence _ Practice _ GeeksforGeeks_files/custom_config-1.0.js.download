CKEDITOR.editorConfig = function( config ) {

    config.toolbar = 'custom';
    config.toolbar_custom = [
            ['Bold','Italic','Underline'],
            ['Link','Image','CodeSnippet'],
            ['Outdent','Indent'],
            ['NumberedList','BulletedList'],
            ['find','selection','Mathjax'],
            ];
       
     
    // are not needed in a basic editor. They are removed here.
    config.removeButtons = 'Cut,Copy,Paste,Undo,Redo,Anchor,Underline,Strike,Subscript,Superscript';
    config.disallowedContent = 'script';
    config.disableNativeSpellChecker = true;
    config.scayt_autoStartup = true;
    config.extraPlugins = 'uploadimage,xml,textmatch,ajax,textwatcher,autocomplete,mentions,widget,lineutils,dialog,clipboard,mathjax';     
    config.mathJaxLib = 'https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.4/MathJax.js?config=TeX-AMS_HTML';
    config.shiftEnterMode = CKEDITOR.ENTER_BR;
    config.enterMode = CKEDITOR.ENTER_BR;

    config.mentions = [ { feed: function( options, callback ) {
                                    var xhr = new XMLHttpRequest();

                                    xhr.onreadystatechange = function() {
                                        if ( xhr.readyState == 4 ) {
                                            if ( xhr.status == 200 ) {
                                                console.log(this.responseText);
                                                callback(JSON.parse(this.responseText));
                                            } else {
                                                callback( [] );
                                            }
                                        }
                                    }

                                    xhr.open( 'GET', 'https://util.geeksforgeeks.org/api/users/' + encodeURIComponent(options.query) + '/', true);
                                    xhr.withCredentials = true;
                                    xhr.send();
                                }, 
                            minChars: 1,
                            itemTemplate: '<li data-id="{id}"><img src="{img}" style="width:20px;height:20px;display:inline;"> {name}</li>',
                            outputTemplate: '<a href="https://auth.geeksforgeeks.org/user/{name}">{name}</a> '
                        } ];

    config.fillEmptyBlocks = false;
    config.filebrowserUploadUrl = '/ckeditor/plugins/upload.php?csrf_token='+$("#utoken").text();
    config.image_previewText = CKEDITOR.tools.repeat( ' ', 100 );
    config.filebrowserUploadMethod = 'form';

    CKEDITOR.on( 'dialogDefinition', function( ev ) {

        // Take the dialog name and its definition from the event data.
        var dialogName = ev.data.name;
        var dialogDefinition = ev.data.definition;
        var dialog = ev.data.definition.dialog; 
      
        if(dialogName == 'image') {

            dialog.on('show', function () {
                this.selectPage('Upload');
            }); 
        
            // Remove the 'Link' and 'Advanced' tabs from the 'Image' dialog.
            dialogDefinition.removeContents( 'Link' );
            dialogDefinition.removeContents( 'advanced' );

            // Get a reference to the 'Image Info' tab.
            var infoTab = dialogDefinition.getContents( 'info' );

            // Remove unnecessary widgets/elements from the 'Image Info' tab.         
            infoTab.remove( 'txtVSpace');
            infoTab.remove( 'txtHSpace');
 
        } else if(dialogName == 'link') {

            // Remove the 'Upload','Advanced' and 'Target' tabs from the 'Link' dialog.
            dialogDefinition.removeContents( 'upload' );
            dialogDefinition.removeContents( 'advanced' );
            dialogDefinition.removeContents( 'target' );
            dialogDefinition.getContents('info').get('protocol')['items'].splice(2, 3); // remove all other protocol apart from https and https
            dialogDefinition.getContents('info').get('linkType')['items'].splice(1, 3); // remove all other link type apart from URL

        };
    });

    CKEDITOR.on( 'instanceReady', function(ev) {
        ev.editor.dataProcessor.writer.setRules('p',
            {
                indent : false,
                breakBeforeOpen : false,
                breakAfterOpen : false,
                breakBeforeClose : false,
                breakAfterClose : false
            });
    });

    config.disallowedContent = 'img{width,height}';
    config.extraAllowedContent = 'img[width,height]';

    $('#forum-discussion img').each(function() {
        if(!$(this).hasClass("img-responsive"))
            $(this).addClass('img-responsive');
    });

}


