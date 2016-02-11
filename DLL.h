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

DLL* createDLL() {
    DLL* newDLL = (DLL*)malloc(sizeof(DLL));
    newDLL->head = newDLL->tail = NULL;
    newDLL->length = 0;

    return newDLL;
}

DLLNode* createDLLNode(int data) {
    DLLNode* newDLLNode = (DLLNode*)malloc(sizeof(DLLNode));
    newDLLNode->data = data;
    newDLLNode->prev = newDLLNode->next = NULL;

    return newDLLNode;
}

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

int DLLSize(DLL* dll) {
    return dll->length;
}

#endif // DLL_H_INCLUDED
