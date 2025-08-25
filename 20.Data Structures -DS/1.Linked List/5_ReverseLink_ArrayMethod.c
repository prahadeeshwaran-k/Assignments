#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    int roll;
    char name[20];
    float marks;
    struct student *next;
} node;

void add_end(node **);
void print(node * );
void reverselink(node **head);

int main(){
    node *hptr = NULL;
    add_end(&hptr);
    add_end(&hptr);
    add_end(&hptr);
    print(hptr);
    reverselink(&hptr);
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

int count(node * head){
    int i = 0;
    node *temp = head;    
    while(temp){
        i++;
        temp = temp->next;
    }
    return i;
}

void reversedata(node *nodeptr){
    int c = count(nodeptr);
    int size = sizeof(node) - 8;
    node **p = (node**)malloc(c * sizeof(node *));
    node temp;
    
    //Store the nodes in the array of pointers
    for(int i = 0;i<c;i++){
        p[i] = nodeptr;
        nodeptr = nodeptr->next; 
    }

    //Swap the nodes
    for (int i = 0, j = c-1; i < j; i++, j--)
    {
        memcpy(&temp,p[i],size);
        memcpy(p[j],p[i],size);
        memcpy(p[i],&temp,size);
    }
    
}