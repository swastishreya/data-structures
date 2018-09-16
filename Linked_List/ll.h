#ifndef _LL_H_
#define _LL_H_
// Create a structure that will define a node in linked list.
typedef struct nodeLL{
    int data;
    struct nodeLL* link;
} nodeLL;
// Function to create a node for Linked List from heap
nodeLL* getNodeLL(int data);
nodeLL* newLL(int data);
nodeLL* insertNodeAtEndLL(nodeLL* root, int data);
nodeLL* insertNodeAtBegLL(nodeLL* head, int data);
nodeLL* deleteNodeAtBegLL(nodeLL* head);
void displayLL(nodeLL* head);
#endif