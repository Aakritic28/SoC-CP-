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
void printgivenlevel(struct node* root,int level)
{
    if(root==NULL)return;
    if(level==1)cout<<" "<<root->key;
    else if(level>1){
        //recursive call
        printgivenlevel(root->left,level-1);
        printgivenlevel(root->right,level-1);
    }
}
//a node is a leaf node if both right and left child noes are null
void printleafnodes(struct node* root)
{//if node is null,return
    if(!root)return;
    //if node is leaf  node,
    //print its data
    if(!root->left && !root->right){
        cout<<" "<<root->key;
        return;
    }
    //if left child exists,
    //check for lef recursively
    if(root->left)printleafnodes(root->left);

    //if right child exists,
    //check for leaf recursively
    if(root->right)printleafnodes(root->right);
}

void printnonleafnodes(struct node* root)
{
    //base cases
    if(root==NULL || (root->left==NULL && root->right==NULL))return;
   
   //if current node is non leaf,
   if(root->left!=NULL || root->right!=NULL){
    cout<<" "<<root->key;
   }
   //if root is not NULL and its one
   // of its child is also not NULL
   printnonleafnodes(root->left);
   printnonleafnodes(root->right);
   
}

int height(struct node* node)
{
    if(node==NULL)return 0;
    else{
        //compute the depth of each subtree
        int ldepth=height(node->left);
        int rdepth=height(node->right);

        //use the larger one
        if(ldepth>rdepth)return (ldepth+1);
        else return (rdepth+1);
    }
}
void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        cout <<" "<< root->key;
        inorder(root->right);
    }
}

struct node* minValueNode(struct node* node){
    struct node* current=node;
    //loop down to find the leftmost lea
    while(current && current->left!=NULL)current=current->left;
    return current;
} 

struct node* deletenode(struct node* root, int key)
{
    //base case
    if(root==NULL)return root;
    // if the key tobe deleted is smaller than the root's key, then it lies in left subtree
    if(key <root->key){
        root->left=deletenode(root->left, key);
    }
    //if key to be deleted is greater than the root key then it lies to right subtree
    else if(key>root->key){
        root->right=deletenode(root->right, key);
    }
    //if key is same as root's key then this is the node to be deleted
    else{
        if(root->left==NULL){
            struct node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        // Node with two children:
        // Get the inorder successor(smallest
        // in the right subtree)
        struct node* temp = minValueNode(root->right);
  
        // Copy the inorder successor's
        // content to this node
        root->key = temp->key;
  
        // Delete the inorder successor
        root->right
            = deletenode(root->right, temp->key);
    }
    return root;
    }

  int nodecount(struct node* node)
  {
    if(node==NULL)return 0;
    else return nodecount(node->left)+nodecount(node->right)+1;
  }

  struct node* emptyBST(struct node* root)
  {
    struct node* temp;
    if(root !=NULL){
        emptyBST(root->left);
        emptyBST(root->right);
        cout<<"\nReleased node: "<<root->key;
        temp=root;
        free(temp);
    }
    return root;
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
    inorder(root);
    cout<<endl<<nodecount(root);
    cout<<endl<<minValueNode(root)->key;
    cout<<endl<<height(root);

    cout<<endl;
    root=emptyBST(root);
    
}

