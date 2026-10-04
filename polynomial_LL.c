#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coefficient;
    int exponent;
    struct Node *next;
};

struct Node *start = NULL;

// Create polynomial
void create()
{
    struct Node *newNode, *temp;
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter coefficient: ");
        scanf("%d", &newNode->coefficient);

        printf("Enter exponent: ");
        scanf("%d", &newNode->exponent);

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

// Display polynomial
void display()
{
    struct Node *temp = start;

    printf("\nPolynomial: ");

    while (temp != NULL)
    {
        printf("%dx^%d", temp->coefficient, temp->exponent);

        if (temp->next != NULL)
        {
            printf(" + ");
        }

        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    create();
    display();

    return 0;
}