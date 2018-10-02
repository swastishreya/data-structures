#include "deepCopy.h"
#include<stdio.h>

int main()
{
    stack* stackObj;
    stackObj=newStack(5);
    stackObj=pushStack(stackObj,4);
    stackObj=pushStack(stackObj,3);
    stackObj=pushStack(stackObj,2);
    stackObj=pushStack(stackObj,1);

    stack* newObj;
    newObj=deepCopySTack(stackObj);
    printf("%d\n",peekStack(newObj));
    newObj=popStack(newObj);
    printf("%d\n",peekStack(newObj));
    newObj=popStack(newObj);
    printf("%d\n",peekStack(newObj));
    newObj=popStack(newObj);
    printf("%d\n",peekStack(newObj));
    newObj=popStack(newObj);
    printf("%d\n",peekStack(newObj));
    newObj=popStack(newObj);
    printf("%d\n",peekStack(newObj));
    newObj=popStack(newObj);
}