#include<stdio.h>
#include<stdlib.h>
#include "DLL.h"

#define true 1
#define false 0

typedef struct Stack {
    DLL* elements;
} Stack;

/*
    In this function, you have to allocate space for stack using malloc function.
    Then you have to initialize the elements DLL using the function createDLL() defined in DLL.h

    Then you have to return the newly allocated and initialized stack.
*/

Stack* createStack() {

}

/*
    Use the appropriate function from the DLL.h file and perform the push operation on stack.
*/

void push(Stack* stack,int data) {

}

/*
    Use the appropriate function from the DLL.h file and perform the pop operation on stack.
*/

void pop(Stack* stack) {

}

/*
    Return true if stack is empty, else return false.
*/

int isEmpty(Stack* stack) {

}

/*
    Get the top node of the stack.
*/

DLLNode* getTop(Stack* stack) {

}

/*
    Free all the memory occupied by stack.

    Hint: while the stack is not empty, keep on popping.
    Then free stack.
*/

void deleteStack(Stack* stack) {

}

/*
    You don't need to change this.
*/

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
