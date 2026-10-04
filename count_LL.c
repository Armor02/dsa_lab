#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main()
{
    struct Node *start = NULL;
    struct Node *newNode, *temp;
    int n, value, count = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Creating linked list
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

    // Counting nodes
    temp = start;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Number of nodes = %d", count);

    return 0;
}