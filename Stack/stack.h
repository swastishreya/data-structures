#include "../Linked_List/ll.h"
#ifndef _STACK_H_
#define _STACK_H_
typedef nodeLL stack;
// Create a new instance of stack
stack* newStack(int data);
// Push an item to stack
stack* pushStack(stack* stackTop,int data);
// Pop an item from stack
stack* popStack(stack* stackTop);
// Get top of stack i.e peek operation
int peekStack(stack* stackTop);
#endif