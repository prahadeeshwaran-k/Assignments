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
void delete(int ,node **ptr);

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
    delete(2,&head);
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

void delete(int roll, node **ptr){
    node *temp = *ptr;

    while (temp != NULL) {
        if (temp->roll == roll) {  
            // Case 1: deleting the head node
            if (temp->prev == NULL) {
                *ptr = temp->next;
                if (temp->next != NULL) {
                    temp->next->prev = NULL;
                }
            }
            // Case 2: deleting other nodes (middle or last)
            else {
                temp->prev->next = temp->next;
                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
            }
            free(temp);
            return;  // stop after deleting
        }
        temp = temp->next;  // move to next node
    }
    printf("Roll %d not found!\n", roll);
}