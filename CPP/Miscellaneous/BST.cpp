#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
}*root;

class bst
{
    public:
        bst()
        {

            root=NULL;
        }
        node * minValueNode( node* node)
        {
            struct node* current = node;

                /* loop down to find the leftmost leaf */
            while (current && current->left != NULL)
                current = current->left;

                return current;
        }
        node* newnode(int n)
        {

            node* newnode=new node;
            newnode->data=n;
            newnode->left=NULL;
            newnode->right=NULL;
                return newnode;
        }
        void add(int val,node *ptr)
        {
                    if(root==NULL)
                    {
                        root=newnode(val);
                        return;

                    }
                    if(ptr->data>val)
                    {
                        if(ptr->left!=NULL)
                            add(val,ptr->left);
                        else
                        {
                            node *newNode;
                            newNode=newnode(val);
                            ptr->left=newNode;
                            return;
                        }

                    }
                    else

                    {
                        if(ptr->right!=NULL)
                            add(val,ptr->right);
                        else
                        {
                            node *newNode;
                            newNode=newnode(val);
                            ptr->right=newNode;
                            return;
                        }

                    }

        }
    void postorder(node *ptr)
    {
        if(root==NULL)
            cout<<"EMPTY";
        if(ptr!=NULL)
           {

                    postorder(ptr->left);
                    postorder(ptr->right);
                    cout<<" "<<ptr->data;
           }
    }
    void inorder(node *ptr)
    {

        if(root==NULL)
            cout<<"Empty"<<endl;
        if(ptr!=NULL)
        {

            inorder(ptr->left);
            cout<<" "<<ptr->data;
            inorder(ptr->right);
        }
    }

    int leafnode(node *ptr)
    {
        int c;
        if(root==NULL)
            cout<<"tree is empty";
        if(ptr==NULL)
            return 0;
        if(ptr->right==NULL && ptr->left==NULL)
        {
            return 1;



        }
            return (leafnode(ptr->left)+leafnode(ptr->right));

    }
    int level(node *ptr)
    {

        if(root==NULL)
            cout<<"Tree is Empty";
        if(ptr!=NULL)
        {

            return (1+max(level(ptr->left),level(ptr->right)));

        }
        else
            return 0;

    }

     node* deleteNode(node* root, int key)
{
    // base case
    if (root == NULL) return root;

    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);

    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}






    void del(int a,node *ptr)//a 15
    {
        if(root==NULL)
            cout<<"empty";
        if(ptr!=NULL)
        {
            if(ptr->data<a)
                del(a,ptr->right);
            else if(ptr->data>a)
                del(a,ptr->left);
            else
            {

                    if(ptr->left==NULL && ptr->right==NULL)  //leaf node
                    {

                            delete(ptr);


                    }




        //Double child
                    if(ptr->left!=NULL && ptr->right!=NULL)
                    {

                        node *leftSubtree=ptr->left;
                        while(leftSubtree->right!=NULL)
                            leftSubtree=leftSubtree->right;
                        ptr->data=leftSubtree->data;
                        del(leftSubtree->data,leftSubtree);



                    }


        //single child
                else
            {

                    if(ptr->left!=NULL)
                {
                        ptr->data=ptr->left->data;
                        ptr->left=NULL;
                        free(ptr->left);


                }

                    if(ptr->right!=NULL)

                    {

                        ptr->data=ptr->right->data;
                        ptr->right=NULL;
                        free(ptr->right);
                    }

            }

        }

    }



}





};

int main()
{

    bst b;
    b.add(17,root);
    b.add(6,root);
    b.add(33,root);
    b.add(3,root);
    b.add(12,root);
    b.add(9,root);
    b.add(5,root);
    b.add(18,root);
    b.add(54,root);
    b.add(47,root);
    b.add(94,root);
    b.add(66,root);
   // cout<<b.leafnode(root)<<endl;
   // cout<<b.level(root)<<endl;
   // b.inorder(root);
    cout<<endl;
   // b.postorder(root);
    cout<<endl;
    //root=b.deleteNode(root,66);
    //b.inorder(root);
    cout<<endl;
   // cout<<b.minValueNode(root->right)<<endl;
    cout<<endl;


    /*int x,y,z;
    bst b;

    while(cin>>x){

        if(x==1){
            cin>>y;
            b.add(y,root);
        }

        else if(x==2)
            b.inorder(root);

        else
            return 0;

    }*/
    return 0;
}
