// Linked list implementation of stack
#include "queue.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
void newQueue(queue *q, size_t memSize)
{
   q->queue_size = 0;
   q->memSize = memSize;
   q->front = q->rear = NULL;
}

int enqueue(queue *q, const void *data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = malloc(q->memSize);
    newNode->next = NULL;
    memcpy(newNode->data, data, q->memSize);

    if(q->queue_size == 0)
    {
        q->front = q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    q->queue_size++;
    return 0;
}
void dequeue(queue *q, void *data)
{
    if(q->queue_size > 0)
    {
        node *temp = q->front;
        memcpy(data, temp->data, q->memSize);
        if(q->queue_size > 1)
        {
            q->front = q->front->next;
        }
        else
        {
            q->front = NULL;
            q->rear = NULL;
        }
        q->queue_size--;
        free(temp->data);
        free(temp);
    }
}
void peekQueue(queue *q, void *data)
{
    if(q->queue_size > 0)
    {
       node *temp = q->front;
       memcpy(data, temp->data, q->memSize);
    }
}
int getQueueLength(queue *q)
{
    return q->queue_size;
}