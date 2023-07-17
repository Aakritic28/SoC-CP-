#include<iostream>
using namespace std;
struct node
{
    int key;
    struct node*left,*right;
};

// function to create a new BST node
struct node* newNode(int item)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}

//function to insert a new node with
//given key in BST
struct node* insert(struct node* node,int key)
{
    //if the tree is empty, return a new node
    if(node == NULL)return newNode(key);
    

    //otherwise, recur down the tree
    if(key<node->key)
    {
        node->left=insert(node->left,key);
    }
    else if(key > node->key)
    {
        node->right=insert(node->right, key);
    }

    //return the node pointer
    return node;
    
}

void preorder(struct node* root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }

}

int main(){
    struct node*root=NULL;
    root=insert(root,50);
    insert(root, 30);
    insert(root,20);
     insert(root, 40);
    insert(root,70);
     insert(root, 60);
    insert(root,80);
    preorder(root);
    
}

