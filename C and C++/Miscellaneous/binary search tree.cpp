#include<iostream>
using namespace std;
struct node
{

    int data;
    node *left;
    node *right;
};
node *root;
class bst
{
    public:
        node *left;
        node *right;
        bst()
        {
            root=NULL;
        }
        void insert(node *tree, node *newnode )
        {

            if(root==NULL)
            {
                root = newnode;
                root->left=NULL;
                root->right=NULL;
            }

            if(newnode->data < tree->data){
                if(tree->left != NULL)
                    insert(tree->left,newnode);
                else
                {
                    tree->left=newnode;
                    newnode->left=NULL;
                    newnode->right=NULL;

                }
            else
                {
                    if(newnode->data>tree->data)
                    {

                        if(tree->right!=NULL)
                            insert(tree->right,newnode);
                        else
                        {

                            tree->right=newnode;
                            newnode->left=NULL;
                            newnode->right=NULL;
                        }
                    }
                }

            }



        }


};

void main(){

    class bst b;
    node *temp=new node;
    temp->data=5;
    b.insert(node *root, temp );
}
