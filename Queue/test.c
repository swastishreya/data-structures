#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    // Declare a queue type
    queue myqueue;
    // Create a queue instance to hole int type of data
    newQueue(&myqueue,sizeof(int));
    // Enqueue 5 entries
    // peekVal will contain the fron node of queue
     int peekVal;
     int dequedVal;
     int f=5;
     enqueue(&myqueue, &f);

     f=6;
     enqueue(&myqueue, &f);

     f=7;
     enqueue(&myqueue, &f);

     f=8;
     enqueue(&myqueue, &f);

     f=9;
     enqueue(&myqueue, &f);
     printf("Queue length is :%d\n",getQueueLength(&myqueue));
     peekQueue(&myqueue, &peekVal);
     printf("The value that is at the front of the queue is %d\n\n", peekVal);
     while(myqueue.front!=NULL){
         dequeue(&myqueue,&dequedVal);
         printf("The value that is dequeued is %d\n\n", dequedVal);
     }

    // To Do : Add test for other types of element for queue
    return 0;
}