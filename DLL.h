#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

typedef struct DLLNode {
    int data;
    struct DLLNode* prev;
    struct DLLNode* next;
} DLLNode;

typedef struct DLL {
    DLLNode* head;
    DLLNode* tail;
    int length;
} DLL;

/*
    In this function all you have to do is allocate space for a DLL using malloc and initialize head and tail to NULL.
    Also, initialize length of the DLL to 0.
    Return the newly created DLL.
*/

DLL* createDLL() {

}

/*
    In this function you have to create a new DLL node using malloc and initialize with the data passed as parameter.
    Also, initialize prev and next fields with NULL.

    return the newly created node.
*/

DLLNode* createDLLNode(int data) {

}

/*
    In this function you have to create a new node (using the createDLLNode function).
    Then, you have to insert this node to the beginning of the DLL.

    You don't have to return anything.

    Take care of the corner cases.
*/

void insertDLLNodeFront(DLL* dll, int data) {

}

/*
    In this function you have to create a new node (using the createDLLNode function).
    Then, you have to insert this node to the tail of the DLL.

    You don't have to return anything.

    Take care of the corner cases.
*/

void insertDLLNodeBack(DLL* dll, int data) {

}

/*
    In this function you have to remove the node in front of the DLL.
    free the allocated space using free() function.

    You don't have to return anything.

    Take care of the corner cases.
*/

void removeDLLNodeFront(DLL* dll) {

}

/*
    In this function you have to remove the node from back of the DLL.
    free the allocated space using free() function.

    You don't have to return anything.

    Take care of the corner cases.
*/

void removeDLLNodeBack(DLL* dll) {

}

/*
    This function simply returns the number of nodes in the DLL.
*/

int DLLSize(DLL* dll) {

}

#endif // DLL_H_INCLUDED
