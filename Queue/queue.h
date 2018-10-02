#ifndef _QUEUE_H_
#define _QUEUE_H_
#include<stdio.h>
typedef struct node
{
  void *data;
  struct node *next;
}node;

typedef struct queue
{
    int queue_size;
    size_t memSize;
    node *front;
    node *rear;
}queue;

void newQueue(queue *q, size_t memSize);
int enqueue(queue *, const void *);
void dequeue(queue *, void *);
void peekQueue(queue *, void *);
int getQueueLength(queue *);
#endif