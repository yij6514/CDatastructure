#ifndef LINKEDLIST.H
#define LINKEDLIST.H

#include <stdio.h>
#include <stdlib.h>

typedef int elementType;

typedef struct tagNode {
    elementType data;
    struct tagNode* nextNode;
} Node;

Node* SLL_CreateNode(elementType newData);
void SLL_DestroyNode(Node* node);
void SLL_AppendNode(Node** head, Node* newNode);
Node* SLL_GetNodeAt(Node* head, int location);
void SLL_DeleteNode(Node** head, Node* remove);
void SLL_InsertNode(Node* cur, Node* newNode);
int SLL_GetNodeCount(Node* head);
void SLL_InsertNewHead(Node** head, Node* newHead);

#endif