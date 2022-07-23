#include<stdio.h>
#include<malloc.h>>
int main()
{

    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(n*sizeof(int)); // dynamically allocated


    printf("malloc\n");

    for(int i=0;i<n;i++)
        printf("%d\n",*(a+i));

    free(a);
    a=NULL;  // after free adjust pointer to null

    /*a[2]=4;
    printf("\nAfter free a-array\n");
    for(int i=0;i<n;i++)
        printf("%d\n",*(a+i));*/

    printf("\ncalloc\n");
    int *b;
    b=(int *)calloc(n,sizeof(int));


     for(int i=0;i<n;i++)
        printf("%d\n",*(b+i));

}
