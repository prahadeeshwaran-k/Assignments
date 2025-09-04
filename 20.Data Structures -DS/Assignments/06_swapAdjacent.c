/*6) Write a Singly linked list program to swap the adjacent nodes.
         For Ex: if nodes are 
         A --- B --- C --- D --- E --- F --- G --- H --- I
         then o/p should be
         B --- A --- D --- C --- F --- E --- H --- G --- I
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct ST{
    char data;
    struct ST *next;
}node;

void add_end(node **ptr);
void print(node * head);
void swap(node **ptr);


int k = 0;

int main(){
    node*head = NULL;
    char op;
    do{
        add_end(&head);
        printf("Do you want to add another node? (y/n): ");
        scanf(" %c",&op);
    }
    while(op=='y');
    print(head);
    printf("After elements swap :\n");
    swap(&head);
    print(head);

}
void add_end(node **ptr){
    node*temp  = (node*)malloc(sizeof(node));
    printf("enter Data: ");
    scanf(" %c",&temp->data);

    if(*ptr == NULL){
        temp->next = NULL;
        *ptr = temp;
    }else{
        node*last = *ptr;
        while (last->next != NULL)
        {
            last = last->next;
        }
        
        last->next = temp;
        temp->next = NULL;
    }
}

void print(node * head){
    node * temp = head;
    while(temp){
        if(temp == head){
            printf("%c ", temp->data);
        }else{
            printf("---> %c ", temp->data);
        }
        temp = temp->next;
    }
    printf("\n");
}

void swap(node **ptr){
    
    if (*ptr == NULL) return;
    node *temp  = *ptr;
    while(temp != NULL){
        if(temp->next == NULL){
            return;
        }
        char ch = temp->data;
        temp->data = temp->next->data;
        temp->next->data = ch;
        
        temp = temp->next->next;
    }
}
