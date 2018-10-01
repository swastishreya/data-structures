#include "../Linked_List/ll.h"
#ifndef _QUEUE_H_
#define _QUEUE_H_
typedef nodeLL nodeQueue;
typedef struct queue{
    nodeQueue *front,*rear;
} queue;
// Create a new instance of queue
queue* newQueue();
// Enqueue an item to queue
nodeQueue* enqueue(queue* q,int data);
// Dequeue an item to queue
void dequeue(queue* q);
// Traverse the queue
void traverseQueue(queue* q);
#endif