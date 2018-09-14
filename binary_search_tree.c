// Creating a Binary Search tree
#include<stdio.h>
#include<stdlib.h>
// Create a structure that will define a node in binary search tree.
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

// getNode function creates a node for the binary search tree
node* getNode(int data){
    node* newNode;
    newNode=(node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

// preOrderTraversal is a recursive function that helps in pre-order traversal of 
// a binary search tree
void preOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
node* insertNode(node* root, int data){
    if(root==NULL){
        root=getNode(data);
    }
    else if(data<=root->data){
        root->left=insertNode(root->left,data);
    }
    else{
        root->right=insertNode(root->right,data);
    }
    return root;
}
node* newBst(int data){
    node* root=NULL;
    root=insertNode(root,data);
    return root;
}

int main()
{
    node* bst;
    int data,nodeLimit,loopIterator;
    printf("Enter the root node value to create a BST instance\n");
    scanf("%d",&data);
    // Create an instance of binary search tree
    bst=newBst(data);
    printf("How many more nodes you want to enter in BST?\n");
    scanf("%d",&nodeLimit);
    for(loopIterator=0;loopIterator<nodeLimit;loopIterator++){
        scanf("%d",&data);
        // Push more data to binary search tree
        insertNode(bst,data);
    }
    
    preOrderTraversal(bst);
    printf("\n");
    return 0;
}

