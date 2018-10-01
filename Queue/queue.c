// Linked list implementation of stack
#include "queue.h"
#include "../Linked_List/ll.c"
#include<stdio.h>
#include<stdlib.h>
// Create a new node for the queue
nodeQueue* newNodeQueue(int data){
    nodeQueue* newNode=(nodeQueue*)malloc(sizeof(nodeQueue));
    newNode->data=data;
    newNode->link=NULL;
    return newNode;
}
// Create a new instance of queue
queue* newQueue(){
    queue* queueObject=(queue*)malloc(sizeof(queue));
    queueObject->front=queueObject->rear=NULL;
    return queueObject;
}

nodeQueue* enqueue(queue* q,int data){
    nodeQueue* newNode=newNodeQueue(data);
    if(q->rear==NULL){
       q->rear=q->front=newNode;
    }
    q->rear->link=newNode;
    q->rear=newNode;
    return newNode;
}

void dequeue(queue* q){
    if(q->front==NULL) return;
    nodeQueue* temp=q->front;
    q->front=q->front->link;
    if(q->front==NULL)
    {
        q->rear=NULL;
    }
    free(temp);
}

void traverseQueue(queue* q){
    nodeQueue* frontP=q->front;
    while(frontP!=NULL){
        printf("%d ",frontP->data);
        frontP=frontP->link;
    }
}