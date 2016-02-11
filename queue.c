#include<stdio.h>
#include<stdlib.h>
#include "DLL.h"

#define true 1
#define false 0

typedef struct Queue {
    DLL* elements;
} Queue;

/*
    In this function, you have to allocate space for queue using malloc function.
    Then you have to initialize the elements DLL using the function createDLL() defined in DLL.h

    Then you have to return the newly allocated and initialized queue.
*/

Queue* createQueue() {

}

/*
    Use the appropriate function from the DLL.h file and perform the enqueue operation on queue.
*/

void enqueue(Queue* queue,int data) {

}

/*
    Use the appropriate function from the DLL.h file and perform the dequeue operation on queue.
*/

void dequeue(Queue* queue) {

}

/*
    Return true if queue is empty, else return false.
*/

int isEmpty(Queue* queue) {

}

/*
    Get the frontmost node of the queue.
*/

DLLNode* getFront(Queue* queue) {

}

/*
    Free all the memory occupied by queue.

    Hint: while the queue is not empty, keep on dequeue.
    Then free queue.
*/

void deleteQueue(Queue* queue) {

}

/*
    You don't need to change this.
*/

int main() {

    return 0;
}
