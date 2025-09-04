/*8)Write a Singly linked list program to delete a perticular node from last and also find the count  of no.of nodes using only single traverse.
	Ex:  Suppose  if there are  7 nodes, and if  2nd node has to be delete from last, then it is  6th 
	        node from starting.
	        Before delete  : A --- B --- C --- D --- E --- F --- G
	        After delete    : A ---  B --- C --- D --- E --- G
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct ST{
    char data;
    struct ST *next;
}node;

void add_end(node **ptr);
void print(node * head);
void move(node **ptr);

int k;

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
    printf("Enter the elements delete :\n");
    scanf(" %d",&k);
    move(&head);
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

void move(node **ptr){
    int count = 0;
    if (*ptr == NULL) return;
    
    node *temp  = *ptr;
    node *t = NULL;
    node *prev = NULL;
    
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    printf("count :%d\n",count);
    if(count<1){
        printf("invalid\n");
    }
    
    //remove last element
    if (k == 1){
        node *last = NULL;
        temp = *ptr;
        while(temp->next != NULL){
            last = temp;
            temp = temp->next;
        }
        last->next = NULL;
        free(temp);
        return;
    }
    //remove 1st element
    if (k == count){
        *ptr = (*ptr)->next;
        free(*ptr);
        return;
    }
    
    int pos = count - k +1;
    
    t = *ptr;
    for(int i = 1; i<pos;i++){
        prev = t;
        t = t->next;
    }
    
    prev->next = t->next;
    free(t);
    
    
}
