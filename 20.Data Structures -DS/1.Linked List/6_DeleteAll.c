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
void reverselink(node **head);
void delete_all(node **head);

int main(){
    node *hptr = NULL;
    add_end(&hptr);
    add_end(&hptr);
    add_end(&hptr);
    print(hptr);
    delete_all(&hptr);
    print(hptr);
    
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

void delete_all(node **head){
    node *temp;

    while (*head != NULL)
    {
        temp = *head;
        *head = temp->next;
        free(temp);
    }
}