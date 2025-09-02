#include<stdio.h>
#include<stdlib.h>

typedef struct student {
    struct student *prev;
    int roll;
    char name[20];
    struct student *next;
}node;

void add_begin(node **ptr);
void print(node*ptr);

int main(){
    node *head = NULL;
    char ch;
    do{
        add_begin(&head);
        printf("Do you want to add another node? (y/n): ");
        scanf(" %c",&ch);// NOTE: space before %c to consume newline
    }
    while(ch=='y');
    print(head);

}

void add_begin(node **ptr){
    node *temp = (node*)malloc(sizeof(node));
    printf("Enter the Data\n");
    scanf("%d %s",&temp->roll,temp->name);

    if(*ptr == NULL){
    temp->prev = temp;
    temp->next = temp;
    }else{
        node *last = (*ptr)->prev;
        temp->next = *ptr;
        temp->prev = last;
        last->next = temp;
        (*ptr)->prev = temp;
    }

    *ptr = temp;
}

void print(node *head){
    node * temp = head;
    printf("Roll | Name \n");
    do{
        printf("%d %s\n", temp->roll, temp->name);
        temp = temp->next;
    }while(temp != head);
}