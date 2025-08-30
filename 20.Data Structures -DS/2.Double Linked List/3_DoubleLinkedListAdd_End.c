#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    struct student *prev;
    int roll;
    char name[20];
    float marks;
    struct student *next;
}node;

void add_end(node **ptr);
void print(node*ptr);

int main(){
    node *head;
    char op;
    do{
        add_end(&head);
        printf("Do you want to add another node? (y/n): ");
        scanf(" %c",&op);
    }
    while(op=='y');
    print(head);
}

void add_end(node **ptr){
    node *temp = (node*)malloc(sizeof(node));
    printf("Enter the Data: ");
    scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

    if(*ptr == NULL){
        temp->next = NULL;
        temp->prev = NULL;
        *ptr = temp;
    }else{
        node* last = *ptr;
        while (last->next != NULL)
            last = last->next;
        last->next = temp;
        temp->name;
        temp->prev = NULL;
    }
}

void print(node*ptr){
    printf("Print\n");
    while (ptr!=NULL)
    {
        printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
        ptr =ptr->next;
    }
}