#include "deepCopy.h"
#include<stdio.h>
#include<stdlib.h>

stack* deepCopySTack(stack* stackTop){
    stack* stackTempCopy=NULL;
    stack* stackCopy=NULL;
    while(stackTop!=NULL){
        stackTempCopy=pushStack(stackTempCopy,stackTop->data);
        stackTop=popStack(stackTop);
    }
    while(stackTempCopy!=NULL){
        stackCopy=pushStack(stackCopy,stackTempCopy->data);
        stackTempCopy=popStack(stackTempCopy);
    }
    return stackCopy;
}
