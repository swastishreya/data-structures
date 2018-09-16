#include "stack.h"
#include<stdio.h>
int main()
{
    stack* stackObj;
    stackObj=newStack(5);
    stackObj=pushStack(stackObj,4);
    stackObj=pushStack(stackObj,3);
    stackObj=pushStack(stackObj,2);
    stackObj=pushStack(stackObj,1);
    printf("%d\n",peekStack(stackObj));
    stackObj=popStack(stackObj);
    printf("%d\n",peekStack(stackObj));
    stackObj=popStack(stackObj);
    printf("%d\n",peekStack(stackObj));
    stackObj=popStack(stackObj);
    printf("%d\n",peekStack(stackObj));
    stackObj=popStack(stackObj);
    printf("%d\n",peekStack(stackObj));
    stackObj=popStack(stackObj);
    printf("%d\n",peekStack(stackObj));
    stackObj=popStack(stackObj);
}
