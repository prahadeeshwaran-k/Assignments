#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

typedef struct student{
    struct student *prev;
    int roll;
    char name[20];
    float marks;
    struct student *next;
}node;

void add_end(node **ptr);
void print(node*ptr);
int count(node *ptr);
void Revdata(node *ptr);
void print(node*ptr);


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
    Revdata(head);
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
        temp->prev = last;
        temp->next = last->next;
        last->next = temp;
    }
}

int count(node *ptr){
    int count = 0;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void Revdata(node *ptr){
    node *p1,*p2;
    p1 = ptr;
    p2 = ptr;

    int c = count(ptr);
    int size = sizeof(node) -16;

    while (p2->next != NULL) {
        p2 = p2->next;
    }
    node temp;
    for(int i =0;i<c/2;i++){
        memcpy(&temp.roll,&p1->roll,size);
        memcpy(&p1->roll,&p2->roll,size);
        memcpy(&p2->roll,&temp.roll,size);
        p1=p1->next;
        p2=p2->next;
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