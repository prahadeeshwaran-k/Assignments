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

    temp->prev = 0;
    temp->next = *ptr;

    if(*ptr != NULL){
        (*ptr)->prev = temp;
    }
    
    *ptr = temp;
}

void print(node*ptr){
    printf("Print\n");
    while (ptr!=NULL)
    {
        printf("%d %s\n",ptr->roll,ptr->name);
        ptr =ptr->next;
    }
}