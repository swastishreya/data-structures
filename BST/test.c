#include "ds.h"
#include<stdio.h>
// Driver program to run the BST
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
    printf("Pre-order traversal of BST:\n");
    preOrderTraversal(bst);
    printf("\n");
    printf("Post-order traversal of BST\n");
    postOrderTraversal(bst);
    printf("\n");
    printf("In-order traversal of BST\n");
    inOrderTraversal(bst);
    printf("\n");
    printf("Height of BST:%d",heightBST(bst)+1);
    printf("\n");
    return 0;
}