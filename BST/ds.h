#ifndef _BST_H_
#define _BST_H_
	// Create a structure that will define a node in binary search tree.
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;
node* getNode(int data);
void preOrderTraversal(node* root);
void postOrderTraversal(node* root);
void inOrderTraversal(node* root);
node* insertNode(node* root, int data);
node* newBst(int data);
int heightBST(node* root);
#endif