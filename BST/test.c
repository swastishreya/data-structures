#include "bst.h"
#include<stdio.h>
#include<stdlib.h>
// Driver program to run the BST
int main()
{
    nodeBST* bst;
    nodeBST* ptr;
    int data,nodeLimit,loopIterator;
    printf("Enter the root node value to create a BST instance\n");
    scanf("%d",&data);
    // Create an instance of binary search tree
    bst=newBST(data);
    printf("How many more nodes you want to enter in BST?\n");
    scanf("%d",&nodeLimit);
    for(loopIterator=0;loopIterator<nodeLimit;loopIterator++){
        scanf("%d",&data);
        // Push more data to binary search tree
        insertNodeBST(bst,data);
    }
    /* Write Code here to test the various funtions for BST */
    printf("Print in order traversal\n");
    inOrderTraversalBST(bst);
    printf("\n");
    printf("%d ",isBST(bst));
    /*                                                      */
    return 0;
}