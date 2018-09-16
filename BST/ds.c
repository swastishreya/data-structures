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
// searchKeyBST function will search for a key in the binary search tree
// and return the pointer to it.
// If not found the function will return a null pointer.
node* searchKeyBST(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(root->data==key){
        return root;
    }
    else if(key<root->data){
        searchKeyBST(root->left,key);
    }
    else{
        searchKeyBST(root->right,key);
    }
}

// minNodeBST will return a pointer to node whose data is smallest in the BST
node* minNodeBST(node* root){
   node* currentNode=root;
   if(currentNode==NULL) return currentNode;
   while(currentNode->left!=NULL){
       currentNode=currentNode->left;
   }
   return currentNode;
}

// maxNodeBST will return a pointer to node whose data is largest in the BST
node* maxNodeBST(node* root){
   node* currentNode=root;
   if(currentNode==NULL) return currentNode;
   while(currentNode->right!=NULL){
       currentNode=currentNode->right;
   }
   return currentNode;
}

node* deleteNodeBST(node* root,int key){
    if(root==NULL) return root;
    if(key<root->data){
        root->left=deleteNodeBST(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteNodeBST(root->right,key);
    }
    else{
        // If the node to be deleted is leaf node or have one child.
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
        // If the node to be deleted has two children
        node* temp = minNodeBST(root->right);
        root->data = temp->data;
        root->right=deleteNodeBST(root->right,temp->data);
    }
    return root;
}
// printLevelNodeBST will print all the nodes from left to right in a BST
// for a given level
void printLevelNodeBST(int level,node* root){
    if (root==NULL) return;
    if(level==1){
        printf("%d ",root->data);
        return;
    }

    else{
        printLevelNodeBST(level-1,root->left);
        printLevelNodeBST(level-1,root->right);
    }
}
// levelOrderTraversalBST will do a level order traversal of a binary search tree.
void levelOrderTraversalBST(node* root){
    int bstHeight=heightBST(root);
    bstHeight++;
    for(int i=1;i<=bstHeight;i++){
        printLevelNodeBST(i,root);
    }
}
