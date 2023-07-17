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
int height(struct node* node)
{
    if(node==NULL)return 0;
    else{
        //compute the depth of each subtree
        int ldepth=height(node->left);
        int rdepth=height(node->right);

        //use the larger one
        if(ldepth>rdepth)return (ldepth +1);
        else return (rdepth+1);

    }
}
// print nodes at a given level
void printgivenlevel(struct node* root,int level)
{
    if(root==NULL)return;
    if(level==1)cout<<" "<<root->key;
    else if(level>1){
        //recursive call
        printgivenlevel(root->left, level-1);
         printgivenlevel(root->right, level-1);
    }
}

void printlevelorder(struct node* root)
{
    int h=height(root);
    int i;
    for(i=1;i<=h;i++){
        printgivenlevel(root,i);
        cout<<"\n";
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

    //function call
    printlevelorder(root);
    return 0;
    
    
}

