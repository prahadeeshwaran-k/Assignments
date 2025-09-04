#include<stdio.h>
#include <stdlib.h>

typedef struct rollBuffer{
    int num;
    struct rollBuffer *next;
} roll;


void enque(roll**head){
    roll * temp= (roll*)malloc(sizeof(roll));
    printf("Roll\n");
    scanf("%d", &temp->num);

    temp->next = *head;
    *head = temp;
}

int deque(roll **ptr){
    if (*ptr == NULL) {
        return -1; //Queue is empty
    }

    int temp = (*ptr)->num;
    roll *ptrtemp  = *ptr;
    *ptr = (*ptr)->next;
    free(ptrtemp);
    return temp;
}

int isfull(roll *ptr){
   return ptr != NULL;  // 1 if not empty, 0 if empt
}

void print(roll *head){
    roll * temp = head;
    if (temp == NULL) {
        printf("Queue is empty\n");
        return; 
    }

    printf("queue\n");

    while(temp){
        printf("%d\n", temp->num);
        temp = temp->next;
    }
}
int main(){
     roll *rollhead = NULL;

    enque(&rollhead);
    enque(&rollhead);
    enque(&rollhead);

    print(rollhead);

    printf("Dequeued: %d\n", deque(&rollhead));
    print(rollhead);
    printf("Dequeued: %d\n", deque(&rollhead));
    print(rollhead);
    printf("Dequeued: %d\n", deque(&rollhead));
    print(rollhead);

    printf("Dequeued: %d\n", deque(&rollhead));

    return 0;
}

