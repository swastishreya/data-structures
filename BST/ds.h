#ifndef _BST_H_
#define _BST_H_
// Create a structure that will define a node in binary search tree.
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} node;
// Function to create a node for BST from heap
node* getNode(int data);
// Function to do a pre order traversal of BST
void preOrderTraversal(node* root);
// Function to do a post order traversal of BST
void postOrderTraversal(node* root);
// Function to do a in order traversal of BST
void inOrderTraversal(node* root);
// Function to insert a node in BST
node* insertNode(node* root, int data);
// Function to create a new instance of binary search tree
// It expects 'data' as an argument which will be the root node of the BST
node* newBst(int data);
// Function to get the height of a binary search tree
int heightBST(node* root);
// Function to get the smallest node of BST
node* minNodeBST(node* root);
// Function to get the largest node of BST
node* maxNodeBST(node* root);
// Function to do a search operation on BST
node* searchKeyBST(node* root,int key);
// Function to delete a key from BST
node* deleteNodeBST(node* root,int key);
// TO-DO
// Level order traversal of a BST
// Vertical order traversal of BST
// Top view of a BST
// Check if a given binary tree is BST or not.
#endif