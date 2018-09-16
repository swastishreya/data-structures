#include "ds.h"
#include<stdio.h>
#include<stdlib.h>
// Driver program to run the BST
int main()
{
    node* bst;
    node* ptr;
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
    /* Write Code here to test the various funtions for BST */

    /*                                                      */
    return 0;
}