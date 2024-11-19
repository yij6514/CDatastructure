#include "LinkedList.h"

int main() {
    int i = 0;
    int count = 0;
    Node* list = NULL;
    Node* cur = NULL;
    Node* newNode = NULL;

    for(i = 0; i < 5; i++) {
        newNode = SLL_CreateNode(i);
        SLL_AppendNode(&list, newNode);
    }

    newNode = SLL_CreateNode(-1);
    SLL_InsertNode(&list, newNode);

    newNode = SLL_CreateNode(-2);
    SLL_InsertNode(&list, newNode);

    count = SLL_GetNodeCount(list);
    for(i = 0; i < count; i++) {
        cur = SLL_GetNodeAt(list, i);
        printf("List[%d] : %d", i, cur->data);
    }

    printf("\nInserting 3000 After [2]......\n\n");

    cur = SLL_GetNodeAt(list, 2);
    newNode = SLL_CreateNode(3000);

    SLL_InsertNode(cur, newNode);

    count = SLL_GetNodeCount(list);
    for(i = 0; i < count; i++) {
        cur = SLL_GetNodeAt(list, i);
        printf("List[%d] : %d", i, cur->data);
    }

    printf("\nDestroying List...\n");

    for(i = 0; i < count; i++) {
        cur = SLL_GetNodeAt(list, 0);

        if(cur != NULL) {
            SLL_DeleteNode(&list, cur);
            SLL_DestroyNode(cur);
        }
    }

    return 0;
}