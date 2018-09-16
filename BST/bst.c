#include "bst.h"
#include<stdio.h>
#include<stdlib.h>
// getNode function creates a node for the binary search tree
nodeBST* getNodeBST(int data){
    nodeBST* newNode;
    newNode=(nodeBST*)malloc(sizeof(nodeBST));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

// preOrderTraversal is a recursive function that helps in pre-order traversal of 
// a binary search tree
void preOrderTraversalBST(nodeBST* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preOrderTraversalBST(root->left);
    preOrderTraversalBST(root->right);
}
// postOrderTraversal is a recursive function that helps in post-order traversal of 
// a binary search tree
void postOrderTraversalBST(nodeBST* root){
    if(root==NULL){
        return;
    }
    postOrderTraversalBST(root->left);
    postOrderTraversalBST(root->right);
    printf("%d ",root->data);
}
// inOrderTraversal is a recursive function that helps in in-order traversal of 
// a binary search tree
void inOrderTraversalBST(nodeBST* root){
    if(root==NULL){
        return;
    }
    inOrderTraversalBST(root->left);
    printf("%d ",root->data);
    inOrderTraversalBST(root->right);
}
// insertNode funtion inserts a node to binary search tree
nodeBST* insertNodeBST(nodeBST* root, int data){
    if(root==NULL){
        root=getNodeBST(data);
    }
    else if(data<=root->data){
        root->left=insertNodeBST(root->left,data);
    }
    else{
        root->right=insertNodeBST(root->right,data);
    }
    return root;
}

// newBST is a wrapper funtion that helps to create a instance of binary search tree
nodeBST* newBST(int data){
    nodeBST* root=NULL;
    root=insertNodeBST(root,data);
    return root;
}
int heightBST(nodeBST* root){
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
nodeBST* searchKeyBST(nodeBST* root,int key){
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
nodeBST* minNodeBST(nodeBST* root){
   nodeBST* currentNode=root;
   if(currentNode==NULL) return currentNode;
   while(currentNode->left!=NULL){
       currentNode=currentNode->left;
   }
   return currentNode;
}

// maxNodeBST will return a pointer to node whose data is largest in the BST
nodeBST* maxNodeBST(nodeBST* root){
   nodeBST* currentNode=root;
   if(currentNode==NULL) return currentNode;
   while(currentNode->right!=NULL){
       currentNode=currentNode->right;
   }
   return currentNode;
}

nodeBST* deleteNodeBST(nodeBST* root,int key){
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
            nodeBST* temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL){
            nodeBST* temp=root->left;
            free(root);
            return temp;
        }
        // If the node to be deleted has two children
        nodeBST* temp = minNodeBST(root->right);
        root->data = temp->data;
        root->right=deleteNodeBST(root->right,temp->data);
    }
    return root;
}
// printLevelNodeBST will print all the nodes from left to right in a BST
// for a given level
void printLevelNodeBST(int level,nodeBST* root){
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
void levelOrderTraversalBST(nodeBST* root){
    int bstHeight=heightBST(root);
    bstHeight++;
    for(int i=1;i<=bstHeight;i++){
        printLevelNodeBST(i,root);
    }
}
void getMinMax(nodeBST* root, int* leftMin,int* rightMax,int horizontal_distance){
    if(root==NULL) return;
    if(horizontal_distance<*leftMin){
        *leftMin=horizontal_distance;
    }
    else if(horizontal_distance>*rightMax){
        *rightMax=horizontal_distance;
    }
    getMinMax(root->left,leftMin,rightMax,horizontal_distance-1);
    getMinMax(root->right,leftMin,rightMax,horizontal_distance+1);
}
void printVertical(nodeBST* root,int i,int horizontal_distance){
    if(root==NULL) return;
    if(horizontal_distance==i){
        printf("%d ",root->data);
    }
    printVertical(root->left,i,horizontal_distance-1);
    printVertical(root->right,i,horizontal_distance+1);
}
void verticalOrderTraversalBST(nodeBST* root){
    int leftMin=0, rightMax=0, horizontal_distance=0;
    getMinMax(root,&leftMin,&rightMax,horizontal_distance);
    for(int i=leftMin;i<=rightMax;i++){
        printVertical(root,i,horizontal_distance);
    }
}
int isBST(nodeBST* root){
    if(root==NULL) return 1;
    if( (root->left!=NULL) && (maxNodeBST(root->left)->data>=root->data) ){
        return 0;
    }
    if( (root->right!=NULL) && (minNodeBST(root->right)->data<=root->data) ){
        return 0;
    }
    if(!isBST(root->left) || !isBST(root->right)){
        return 0;
    }
    else{
        return 1;
    }
}