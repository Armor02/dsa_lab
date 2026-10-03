#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *start = NULL;
void create() {
    struct Node *newNode, *current;
    int N;
    printf("Enter the number of nodes: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Overflow");
            exit(0);
        }
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (start == NULL) {
            start = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }
}
void search(){
    int n;
    struct Node *temp=start;
    //temp =start;
    printf("Enter the data to be searched: ");
    scanf("%d ",&n);
    while(temp != NULL){
        if(temp->data==n){
            printf("The data is found : ");
            return;
        }
    temp=temp->next;
    }
    printf("Data not found");
}
int main(){
    create();
    search();
    return 0;
}