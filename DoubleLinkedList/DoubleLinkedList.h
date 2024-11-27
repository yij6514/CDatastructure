#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int elementType;

typedef struct tagNode {
    elementType data;
    struct tagNode* prevNode;
    struct tagNode* nextNode;
} Node;

Node* DLL_CreateNode(elementType newData);
void DLL_DestroyNode(Node* node);
void DLL_AppendNode(Node** head, Node* newNode);
Node* DLL_GetNodeAt(Node* head, int location);

#endif