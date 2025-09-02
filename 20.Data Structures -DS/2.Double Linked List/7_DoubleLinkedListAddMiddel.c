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
void add_middle(node **ptr);
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
    add_middle(&head);
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
        temp->prev = last; 
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

void add_middle(node **ptr){
    node *temp  = (node*)malloc(sizeof(node));
    printf("Enter the Data:Roll Name Marks\n");
    scanf("%d %19s %f",&temp->roll,temp->name,&temp->marks);
    //check if the the current node is head ptr and  (newnode)<(headnode)
    if((*ptr == NULL) || ((temp->roll) < (*ptr)->roll)){
        temp->prev= NULL;
        temp->next = *ptr;
        (*ptr)->prev = temp;
        *ptr = temp;
    }else{
        node*last = *ptr;
        //the present->next is not be null and the temp->roll < (present->next)->roll 
        while((last->next!=NULL)&&(temp->roll > last->next->roll)){
            last = last->next;
        }

        temp->prev = last;
        if(last->next == NULL){
            temp->next = NULL;
            last->next = temp;
            return;
        }
        temp->next = last->next;
        last->next = temp;
        temp->next->prev = temp;
    }
}
