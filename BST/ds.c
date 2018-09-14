#include "ds.h"
#include<stdio.h>
#include<stdlib.h>
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
// postOrderTraversal is a recursive function that helps in post-order traversal of 
// a binary search tree
void postOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ",root->data);
}
// inOrderTraversal is a recursive function that helps in in-order traversal of 
// a binary search tree
void inOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ",root->data);
    inOrderTraversal(root->right);
}
// insertNode funtion inserts a node to binary search tree
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

// newBST is a wrapper funtion that helps to create a instance of binary search tree
node* newBst(int data){
    node* root=NULL;
    root=insertNode(root,data);
    return root;
}
int heightBST(node* root){
    if(root==NULL){
        return -1;
    }
    else if(heightBST(root->left)>=heightBST(root->right)){
        return heightBST(root->left)+1;
    }
    else{
        return heightBST(root->right)+1;
    }
}

node* searchKeyBST(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(root->data==key){
        return root;
    }
    else if(key<=root->data){
        searchKeyBST(root->left,key);
    }
    else{
        searchKeyBST(root->right,key);
    }
}
