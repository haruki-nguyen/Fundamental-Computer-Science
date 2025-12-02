#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    // Pointer to the next node
    struct Node *next;
};

struct Node *createNode(int value)
{
    // Allocate memory for a new Node and create a pointer to it
    // - `malloc(sizeof(struct Node))` → reserves enough memory for one Node.
    // - `(struct Node *)` → converts the returned memory pointer to type `struct Node*`.
    // - `newNode` → stores the pointer to the newly allocated Node.
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value; // Set data
    newNode->next = NULL;  // Next is NULL since it's the last node

    /* Return pointer */
    return newNode;
}

void insertEnd(struct Node **head, int value)
{
    // Create a new node
    struct Node *newNode = createNode(value);

    /* handle empty list */
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *current = *head;
    /* traverse to last node */
    while (current->next != NULL)
    {
        current = current->next;
    }
    /* link new node */
    current->next = newNode;
}

void printList(struct Node *head)
{
    struct Node *current = head;

    /* loop through nodes and print each */
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    // Indicate the end of the list
    printf("NULL\n");
}

int main()
{
    // Point to the first node in the list
    struct Node *head = NULL;

    // Add elements to the list
    insertEnd(&head, 5);
    insertEnd(&head, 10);
    insertEnd(&head, 20);

    // Print the list
    printList(head);

    return 0;
}