// C program to demonstrate insert operation in binary search tree
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    node *left, *right;
};

// A utility function to create a new BST node
class bst{
public:
node *newNode(int item)
{
    node *temp =  new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

/* A utility function to insert a new node with given key in BST */
node* insert(node* a,int key)
{
    /* If the tree is empty, return a new node */
    if (a== NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < a->key)
        a->left  = insert(a->left, key);
    else if (key > a->key)
        a->right = insert(a->right, key);

    /* return the (unchanged) node pointer */
    return a;
}

};

// Driver Program to test above functions
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    node *root = NULL;
    bst b;
    root =b.insert(root, 50);
    b.insert(root, 30);
    b.insert(root, 20);
    b.insert(root, 40);
    b.insert(root, 70);
    b.insert(root, 60);
    b.insert(root, 80);

    // print inoder traversal of the BST
    b.inorder(root);

    return 0;
}
