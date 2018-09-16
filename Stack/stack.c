// Linked list implementation of stack
#include "stack.h"
#include "../Linked_List/ll.c"
#include<stdio.h>
#include<stdlib.h>
// Create a new instance of stack
stack* newStack(int data){
    stack* stackTop=NULL;
    stackTop=insertNodeAtBegLL(stackTop,data);
    return stackTop;
}
// Push an item to stack
stack* pushStack(stack* stackTop,int data){
    stackTop=insertNodeAtBegLL(stackTop,data);
    return stackTop;
}
// Pop an item from stack
stack* popStack(stack* stackTop){
    if(stackTop==NULL){
       printf("Cannot pop:stack is empty!");
       return stackTop;
   }
   else{
        stackTop=deleteNodeAtBegLL(stackTop);
        return stackTop;
   }
    
}
// Get top of stack i.e peek operation
int peekStack(stack* stackTop){
   if(stackTop==NULL){
       printf("Cannot peek:stack is empty!");
       return -999;
   }
   else{
        return stackTop->data;
   } 
}
