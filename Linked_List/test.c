#include "ll.h"
#include<stdio.h>
#include<stdlib.h>
// Driver program to run the BST
int main()
{
    nodeLL* ll=NULL;
    nodeLL* ll1=NULL;
    int data,nodeLimit,loopIterator;
    printf("Enter the root node value to create a linked list instance\n");
    scanf("%d",&data);
    // Create an instance of linked list
    ll=newLL(data);
    printf("How many more nodes you want to enter in linked list?\n");
    scanf("%d",&nodeLimit);
    for(loopIterator=0;loopIterator<nodeLimit;loopIterator++){
        scanf("%d",&data);
        // Push more data to binary search tree
        ll=insertNodeAtEndLL(ll,data);
    }
    /* Write Code here to test the various funtions for BST */
    printf("Linked list traversal:ll\n");
    displayLL(ll);
    printf("\n");
    ll1=newLL(1);
    ll1=insertNodeAtBegLL(ll1,2);
    ll1=insertNodeAtBegLL(ll1,3);
    ll1=insertNodeAtBegLL(ll1,4);
    ll1=insertNodeAtBegLL(ll1,5);
    ll1=insertNodeAtBegLL(ll1,6);
     printf("Linked list traversal:ll1\n");
    displayLL(ll1);
    printf("Delete first node from each\n");
    ll=deleteNodeAtBegLL(ll);
    ll1=deleteNodeAtBegLL(ll1);
    printf("Linked list traversal:ll\n");
    displayLL(ll);
    printf("\n");
    printf("Linked list traversal:ll1\n");
    displayLL(ll1);
    printf("\n");
    /*                                                      */
    return 0;
}