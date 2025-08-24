#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    int roll;
    char name[20];
    float marks;
    struct student *next;
} node;

void add_end(node **);
void print(node * );
void reversPrint(node*);

int main(){
    node *hptr = NULL;
    add_end(&hptr);
    add_end(&hptr);
    add_end(&hptr);
    print(hptr);
    reversPrint(hptr);
    
}

void add_end(node **head){
    node *temp  = (node*)malloc(sizeof(node));
    printf("Enter the Data:Roll Name Marks\n");
    scanf("%d %19s %f",&temp->roll,temp->name,&temp->marks);

        if(*head == NULL){
            temp->next = *head;
            *head = temp;
        }else{
            node*last = *head;

            while (last->next != NULL)
                last = last->next;

            temp->next = NULL;
            last->next = temp;
        }
}

void print(node * head){
    node * temp = head;

    printf("Roll | Name | Marks\n");

    while(temp){
        printf("%d %s %f\n", temp->roll, temp->name, temp->marks);
        temp = temp->next;
    }
}

//Revers Print
void reversPrint(node*head){
    if(head != NULL){
        reversPrint(head->next);
        printf("%d %s %f\n", head->roll, head->name, head->marks);
    }
}