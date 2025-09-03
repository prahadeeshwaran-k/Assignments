#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int count = 0;

typedef struct node{
    int data;
    struct node *next;
}stack;

stack *head = NULL;

void push(void);
void pop(void);
int peek(void);
void display(void);

int main(){
    int op;
    while(1){
        printf("1:Push | 2:Pop | 3:Peek | 4:Display | Random Bullshit:Exit = ");
        scanf(" %d",&op );
        switch (op) {
            case 1 :
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 :
                printf("%d\n",peek());
                break;
            case 4 :
                display();
                break;
            default:
                return 0;
        }
    }
}

void push(){
    if (count >= MAX)
    {
        printf("Stack Overflow\n");
        return;
    }
    
    stack *temp = (stack*)malloc(sizeof(stack));
    printf("Enter Data: ");
    scanf("%d",&temp->data);

    if(head == NULL){
        temp->next =NULL;
        head = temp;
    }else{
        temp->next  = head;
        head = temp;
    }

    count++;
}
void pop(){
    if(!count){
        printf("Stack Underflow\n");
        return;
    }

    stack *temp = head->next;
    printf("Pop: %d\n", head->data);
    free(head);
    head = temp;
    
    count--;
}

int peek(){
    if(!count){
        printf("Stack Underflow\n");
        return -1;
    }
    return head->data;
}

void display(void){

    if (!count) {
        printf("Stack Underflow\n");
        return;
    }
    stack *temp = head;
    printf("Stack\n");
    while (temp)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    
}