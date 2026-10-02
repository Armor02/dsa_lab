#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*start = NULL;
void create(){
    struct Node *new,*current;
    int N;
    printf("Enter the value of nodes: ");
    scanf("%d",&N);
    for(int i =0;i<N;i++){
        new = (struct Node*)malloc(sizeof(struct Node));
        if(new == NULL){
            printf("overflow");
            exit(0);
        }
        printf("Enter data: ");
        scanf("%d ",&new->data);
        new->next=NULL;
        if(start==NULL){
            start = new;
            current = new;
        }
        else{
            current->next=new;
            current=new;
        }
    }
    //printf("NULL");
}
void insert_beg(){
    struct Node*new,p;
    new=(struct Node*)malloc(sizeof(struct Node));
    if(new==NULL){//overflow condtion
        printf("Overflow");
        exit(0);
    }
    printf("Enter data: ");
    scanf("%d ",&new->data);
    new->next=start;
    start=new;
}
void insert_end(){
    struct Node *new, *p;
    new=(struct Node*)malloc(sizeof(struct Node));
    if(new==NULL){//overflow condtion
        printf("Overflow");
        exit(0);
    }
    printf("Enter data: ");
    scanf("%d ",&new->data);
    new->next=NULL;
    if(start==NULL){//empty condtion
        start=new;
        return;
    }
    p=start;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=new;
}
void insert_middle(){
    struct Node *new,*p;
    int pos;
    new=(struct Node*)malloc(sizeof(struct Node));
    if(new==NULL){
        printf("Overflow");
        exit(0);
    }
    printf("Enter the postion : ");
    scanf("%d ",&pos);

    printf("Enter the data: ");
    scanf("%d ",&new->data);
    new->next=NULL;
    if(pos==1){
        new->next=start;
        start=new;
        return;
    }
    p=start;
    for(int i =1;i<pos-1&&p!=NULL;i++){
        p=p->next;
    }
    if(p==NULL){
        printf("Invalid postion");
        free(new);
        return;
    }
    new->next=p->next;
    p->next=new;
}
void display() {
    struct Node *p;
    if (start == NULL) {
        printf("List is empty");
    }
    else {
        for (p = start; p != NULL; p = p->next) {
            printf("%d -> ", p->data);
        }
        printf("NULL");
    }
}
int main() {

    create();

    printf("\nOriginal List:\n");
    display();

    printf("\n\n--- Insert at Beginning ---\n");
    insert_beg();

    printf("After insertion:\n");
    display();


    printf("\n\n--- Insert at Middle ---\n");
    insert_middle();

    printf("After insertion:\n");
    display();


    printf("\n\n--- Insert at End ---\n");
    insert_end();

    printf("After insertion:\n");
    display();

    return 0;
}




