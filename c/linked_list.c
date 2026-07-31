/*
Description: A C program that manually creates a simple singly linked list of three nodes, links them together, traverses the list to print their values, and safely frees the memory.
The Concepts to Research/Implement:
The Self-Referential Struct: You will need a struct that contains an integer for data, and a pointer of its own struct type to hold the address of the next node.
The Terminator: The last node in a linked list must always have its "next" pointer set to NULL so your program knows when the list ends.
List Traversal: To print the list, you create a temporary pointer, start it at the first node, and use a while loop to jump from node to node (e.g., updating your temporary pointer to equal the current node's "next" pointer) until you hit NULL.
Requirements:
Define your Node struct at the top of your file.
Inside main(), use malloc to dynamically allocate memory for three separate nodes.
Assign an integer value to the data field of each of the three nodes.
Manually link them together: point the first node's next pointer to the second node, the second to the third, and the third to NULL.
Create a temporary pointer (often called head or current), set it to the first node, and use a while loop to print out the data of every node in the chain.
Safely free() all three nodes before returning 0.
*/

#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

// 1. The Blueprint for our "Box"
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // 2. Allocate memory for three separate boxes in RAM
    struct Node *first = malloc(sizeof(struct Node));
    // TODO: Create a 'second' and 'third' pointer, and malloc them exactly like 'first'
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    // 3. Fill the boxes with data and link them together
    first->data = 10;
    // TODO: Set first->next to point to the 'second' node!
    first->next = second; 
    // TODO: Set second->data to any number you want.
    second->data = 20;
    // TODO: Set second->next to point to the 'third' node.
    second->next = third;
    // TODO: Set third->data to any number you want.
    third->data = 30;
    // TODO: Set third->next to NULL (This tells our program the scavenger hunt is over).
    third->next = NULL;

    // 4. The Traversal (Walking through the list)
    struct Node *current = first; // Start at the beginning

    printf("My Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next; // This is how we "jump" to the next box!
    }
    printf("NULL\n");


    // 5. Cleanup
    free(first);
    // TODO: free the second and third nodes
    free(second);
    free(third);

    return 0;
}
