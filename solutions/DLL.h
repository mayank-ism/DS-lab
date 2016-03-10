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
    DLL* newDLL = (DLL*)malloc(sizeof(DLL));
    newDLL->head = newDLL->tail = NULL;
    newDLL->length = 0;

    return newDLL;
}

/*
    In this function you have to create a new DLL node using malloc and initialize with the data passed as parameter.
    Also, initialize prev and next fields with NULL.

    return the newly created node.
*/

DLLNode* createDLLNode(int data) {
    DLLNode* newDLLNode = (DLLNode*)malloc(sizeof(DLLNode));
    newDLLNode->data = data;
    newDLLNode->prev = newDLLNode->next = NULL;

    return newDLLNode;
}

/*
    In this function you have to create a new node (using the createDLLNode function).
    Then, you have to insert this node to the beginning of the DLL.

    You don't have to return anything.

    Take care of the corner cases.
*/

void insertDLLNodeFront(DLL* dll, int data) {
    DLLNode* node = createDLLNode(data);
    if(dll->length == 0) {
        dll->head = dll->tail = node;
    } else {
        node->next = dll->head;
        dll->head->prev = node;
        dll->head = node;
    }

    (dll->length)++;
}

/*
    In this function you have to create a new node (using the createDLLNode function).
    Then, you have to insert this node to the tail of the DLL.

    You don't have to return anything.

    Take care of the corner cases.
*/

void insertDLLNodeBack(DLL* dll, int data) {
    DLLNode* node = createDLLNode(data);
    if(dll->length == 0) {
        dll->head = dll->tail = node;
    } else {
        node->prev = dll->tail;
        dll->tail->next = node;
        dll->tail = node;
    }

    (dll->length)++;
}

/*
    In this function you have to remove the node in front of the DLL.
    free the allocated space using free() function.

    You don't have to return anything.

    Take care of the corner cases.
*/

void removeDLLNodeFront(DLL* dll) {
    if(dll->length == 0) {
        printf("The DLL is empty!\n");
    } else {
        DLLNode* toDelete = dll->head;
        dll->head = dll->head->next;

        if(dll->head != NULL) {
            dll->head->prev = NULL;
        } else {
            dll->tail = NULL;
        }

        free(toDelete);
    }

    (dll->length)--;
}

/*
    In this function you have to remove the node from back of the DLL.
    free the allocated space using free() function.

    You don't have to return anything.

    Take care of the corner cases.
*/

void removeDLLNodeBack(DLL* dll) {
    if(dll->length == 0) {
        printf("The DLL is empty!\n");
    } else {
        DLLNode* toDelete = dll->tail;
        dll->tail = dll->tail->prev;

        if(dll->tail != NULL) {
            dll->tail->next = NULL;
        } else {
            dll->head = NULL;
        }

        free(toDelete);
    }

    (dll->length)--;
}

/*
    This function simply returns the number of nodes in the DLL.
*/

int DLLSize(DLL* dll) {
    return dll->length;
}

#endif // DLL_H_INCLUDED
