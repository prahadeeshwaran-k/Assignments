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
void add_middle(node **head);

int main(){
    node *hptr = NULL;
    add_end(&hptr);
    add_end(&hptr);
    add_end(&hptr);
    print(hptr);
    add_middle(&hptr);
    add_middle(&hptr);
    add_middle(&hptr);
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

void add_middle(node **ptr){
    node *temp  = (node*)malloc(sizeof(node));
    printf("Enter the Data:Roll Name Marks\n");
    scanf("%d %19s %f",&temp->roll,temp->name,&temp->marks);
    //check if the the current node is head ptr and  (newnode)<(headnode)
    if((*ptr == NULL) || ((temp->roll) < (*ptr)->roll)){
        temp->next = *ptr;
        *ptr = temp;
    }else{
        node*last = *ptr;
        //the present->next is not be null and the temp->roll < (present->next)->roll 
        while((last->next!=NULL)&&(temp->roll > last->next->roll)){
            last = last->next;
        }
        temp->next = last->next;
        last->next = temp;
    }
}
