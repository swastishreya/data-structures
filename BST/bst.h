#ifndef _BST_H_
#define _BST_H_
// Create a structure that will define a node in binary search tree.
typedef struct nodeBST{
    int data;
    struct nodeBST* left;
    struct nodeBST* right;
} nodeBST;
// Function to create a node for BST from heap
nodeBST* getNodeBST(int data);
// Function to do a pre order traversal of BST
void preOrderTraversalBST(nodeBST* root);
// Function to do a post order traversal of BST
void postOrderTraversalBST(nodeBST* root);
// Function to do a in order traversal of BST
void inOrderTraversalBST(nodeBST* root);
// Function to insert a node in BST
nodeBST* insertNodeBST(nodeBST* root, int data);
// Function to create a new instance of binary search tree
// It expects 'data' as an argument which will be the root node of the BST
nodeBST* newBST(int data);
// Function to get the height of a binary search tree
int heightBST(nodeBST* root);
// Function to get the smallest node of BST
nodeBST* minNodeBST(nodeBST* root);
// Function to get the largest node of BST
nodeBST* maxNodeBST(nodeBST* root);
// Function to do a search operation on BST
nodeBST* searchKeyBST(nodeBST* root,int key);
// Function to delete a key from BST
nodeBST* deleteNodeBST(nodeBST* root,int key);
// Level order traversal of a BST
void levelOrderTraversalBST(nodeBST* root);
// Vertical order traversal of BST
void verticalOrderTraversalBST(nodeBST* root);
// Check if a given binary tree is BST or not.
int isBST(nodeBST* root);
// TO-DO
// Top view of a BST
#endif