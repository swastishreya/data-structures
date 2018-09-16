#include "ll.h"
#include<stdio.h>
#include<stdlib.h>
// getNode function creates a node for the linked list
nodeLL* getNodeLL(int data){
    nodeLL* newNode;
    newNode=(nodeLL*)malloc(sizeof(nodeLL));
    newNode->data=data;
    newNode->link=NULL;
    return newNode;
}
// insertNodeAtEndLL funtion inserts a node to end of linked list
nodeLL* insertNodeAtEndLL(nodeLL* head, int data){
    if(head==NULL){
        head=getNodeLL(data);
    }
    else{
        head->link=insertNodeAtEndLL(head->link,data);
    }
    return head;
}
// insertNodeAtBegLL funtion inserts a node to begining og linked list
nodeLL* insertNodeAtBegLL(nodeLL* head, int data){
    if(head==NULL){
        head=getNodeLL(data);
    }
    else{
        nodeLL* newNode=getNodeLL(data);
        newNode->link=head;
        head=newNode;
    }
    return head;
}
void displayLL(nodeLL* head){
    nodeLL* traversePtr=head;
    while(traversePtr!=NULL){
        printf("%d ",traversePtr->data);
        traversePtr=traversePtr->link;
    }
}