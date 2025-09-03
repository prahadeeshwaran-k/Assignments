/*
    4) Write a prorgram to swap 'k'th node from begining and 'k' node from end in a Singly linked list.
    For Ex: if nodes are
    A --- B --- C --- D --- E --- F --- G --- H --- I
    if k = 2 , then o/p should be 
    A --- H --- C --- D --- E --- F --- G --- B --- I 
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

    printf("Enter Kth element to swap : ");
    scanf("%d",&k);
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
    printf("\n\n\n");
}

void swap(node **ptr){
    
    if (*ptr == NULL) return;
    
    node *temp  = *ptr;
    node *A,*B;
    
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("Total node: %d\n",count);

    if (k > count || k <= 0) {
        printf("Invalid k\n");
        return;
    }

    int pos = count - k + 1;
    
    A = *ptr;
    for(int i = 1; i<k ; i ++)
        A =  A->next;
    
    B = *ptr;
    for(int i = 1; i<pos ; i ++)
        B =  B->next;

    char ch = A->data;
    A->data = B->data;
    B->data = ch;

}