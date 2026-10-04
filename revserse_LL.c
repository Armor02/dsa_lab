#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *start = NULL;

// Create linked list
void create()
{
    struct Node *newNode, *temp;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (start == NULL)
        {
            start = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
}

// Reverse linked list
void reverse()
{
    struct Node *prev = NULL;
    struct Node *current = start;
    struct Node *nextNode;

    while (current != NULL)
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    start = prev;
}

// Display linked list
void display()
{
    struct Node *temp = start;

    printf("Linked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    create();

    printf("\nOriginal ");
    display();

    reverse();

    printf("Reversed ");
    display();

    return 0;
}