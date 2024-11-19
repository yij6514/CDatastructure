#include "LinkedList.h"

Node* SLL_CreateNode(elementType newData) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = newData;
    newNode->nextNode = NULL;

    return newNode;
}

void SLL_DestroyNode(Node* node){
    free(node);
}

void SLL_AppendNode(Node** head, Node* newNode) {
    if((*head) == NULL){
        *head = newNode;
    }
    else{
        Node* cur = (*head);
        while(cur->nextNode != NULL) {
            cur = cur->nextNode;
        }

        cur->nextNode = newNode;
    }
}

Node* SLL_GetNodeAt(Node* head, int location) {
    Node* cur = head;
    while(cur != NULL && (--location) >= 0) {
        cur =cur->nextNode;
    }

    return cur;
}

void SLL_DeleteNode(Node** head, Node* remove) {
    if(head == remove){
        *head = remove->nextNode;
    }
    else{
        Node* cur = head;
        while(cur == remove){
            cur = cur->nextNode;
        }

        if(cur != NULL) {
            cur->nextNode = remove->nextNode;
        }
    }
}

void SLL_InsertNode(Node* cur, Node* newNode) {
    newNode->nextNode = cur->nextNode;
    cur->nextNode = newNode;
}

int SLL_GetNodeCount(Node* head){
    int count = 0;

    Node* cur = head;
    while(cur != NULL) {
        cur = cur->nextNode;
        count++;
    }

    return count;
}

void SLL_InsertNewHead(Node** head, Node* newHead) {
    if(head == NULL) {
        (*head) == newHead;
    }
    else {
        newHead->nextNode = (*head);
        (*head) = newHead;
    }
}