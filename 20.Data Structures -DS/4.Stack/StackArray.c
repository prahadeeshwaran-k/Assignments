#include<stdio.h>
#define MAX 5 //Size of Stack
int top = -1;
int stack[MAX];


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

//Push the element in the stack
void push(void){
    //Chech the condition for the stack is full
    if(top == MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    printf("Push: ");
    scanf("%d",&stack[++top]);
}

//POP or Remove the top element in the stack
void pop(void){
    //Check the stack is underflow
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Pop: %d\n",stack[top]);
    top--;
}

//Show the top most element
int peek(void){
    //Only need to check the underflow condition
    if(top == -1){
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top];
}

void display(void){

    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Stack\n");
    for(int i = 0; i<=top; i++){
        printf("%d\n",stack[i]);
    }
}
