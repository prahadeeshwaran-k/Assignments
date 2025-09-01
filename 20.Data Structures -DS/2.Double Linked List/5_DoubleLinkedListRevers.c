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
void ReverseLink(node**ptr);

int main(){
    node *head = NULL;
    char op;
    do{
        add_end(&head);
        printf("Do you want to add another node? (y/n): ");
        scanf(" %c",&op);
    }
    while(op=='y');
    
    print(head);
    ReverseLink(&head);
    printf("\nAfter Reversing:\n");
    print(head);
}

void add_end(node **ptr){
    node *temp = (node*)malloc(sizeof(node));
    printf("Enter the Data (roll name marks): ");
    scanf("%d %s %f",&temp->roll, temp->name, &temp->marks);

    temp->next = NULL;

    if(*ptr == NULL){
        temp->prev = NULL;
        *ptr = temp;
    } else {
        node* last = *ptr;
        while (last->next != NULL)
            last = last->next;
        last->next = temp;
        temp->prev = last; 
    }
}

void print(node*ptr){
    printf("\nList:\n");
    while (ptr!=NULL)
    {
        printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
        ptr =ptr->next;
    }
}

void ReverseLink(node **ptr){
    node *last = NULL, *current = *ptr;
    while (current != NULL)
    {
        last = current->prev;
        current->prev = current->next;
        current->next = last;
        current = current->prev; 
    }
        *ptr = last->prev;
}
