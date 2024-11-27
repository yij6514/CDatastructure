#include "DoubleLinkedList.h"

Node* DLL_CreateNode(elementType newData) {
    Node* newNode = (Node*) malloc(sizeof(Node));

    newNode->data = newData;
    newNode->prevNode = NULL;
    newNode->nextNode = NULL;

    return newNode;
}

void DLL_DestroyNode(Node* node) {
    free(node);
}

void DLL_AppendNode(Node** head, Node* newNode) {
    if(*head == NULL) {
        *head = newNode;
    }
    else {
        Node* cur = *head;
        while(cur->nextNode != NULL) {
            cur = cur->nextNode;
        }

        cur->nextNode = newNode;
        newNode->prevNode = cur;
    }
}

Node* DLL_GetNodeAt(Node* head, int location) {
    Node* cur = head;

    while(cur != NULL && (--location) >= 0) {
        cur = cur->nextNode;
    }

    return cur;
}

void DLL_RemoveNode(Node** head, Node* remove) {
    if(*head == remove) {
        
    }
}