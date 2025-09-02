#include<stdio.h>
#include <stdlib.h>
typedef struct student{
    int roll;
    char name[16];
    float marks;
    struct student *next;
} node;

void add_begin();
void print();

int main(){
    node * head  = NULL; 

    add_begin(&head);
    add_begin(&head);
    add_begin(&head);
    print(head);

}

//Add a New node at the Begining
void add_begin(node **head){
    node * temp= (node*)malloc(sizeof(node));

    printf("Enter the The Details : Roll | Name | Marks\n");
    scanf("%d %s %f", &temp->roll, temp->name, &temp->marks);

    if(*head == NULL){
        temp->next = temp;
        *head = temp;
    }else{
        node*last = *head;//take a copy of head pointer
        while(last->next != *head)
            last  = last->next;
        
        last->next = temp;
        temp->next = *head;
        *head = temp;
    }
}

void print(node *head){
    node * temp = head;
    printf("Roll | Name | Marks\n");
    do{
        printf("%d %s %f\n", temp->roll, temp->name, temp->marks);
        temp = temp->next;
    }while(temp != head);
}
