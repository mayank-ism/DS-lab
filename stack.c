#include<stdio.h>
#include<stdlib.h>
#include "DLL.h"

#define true 1
#define false 0

typedef struct Stack {
    DLL* elements;
} Stack;

Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->elements = createDLL();

    return stack;
}

void push(Stack* stack,int data) {
    insertDLLNodeFront(stack->elements,data);
}

void pop(Stack* stack) {
    removeDLLNodeFront(stack->elements);
}

int isEmpty(Stack* stack) {
    int len = DLLSize(stack->elements);
    if(len == 0)
        return true;
    return false;
}

DLLNode* getTop(Stack* stack) {
    return stack->elements->head;
}

void deleteStack(Stack* stack) {
    while(!isEmpty(stack)) {
        pop(stack);
    }

    free(stack);
}

int main() {
    Stack* stack = createStack();

    push(stack,4);
    push(stack,3);

    printf("The top element is = %d\n",getTop(stack)->data);

    pop(stack);
    printf("The top element is = %d\n",getTop(stack)->data);
    pop(stack);
    pop(stack);

    return 0;
}
