#include "queue.h"
#include<stdio.h>
int main()
{
    queue* myQueue=newQueue();
    enqueue(myQueue,1);
    enqueue(myQueue,2);
    enqueue(myQueue,3);
    traverseQueue(myQueue);
    dequeue(myQueue);
    printf("\n");
    traverseQueue(myQueue);
    return 0;
}
