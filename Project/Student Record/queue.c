#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void enque(roll**head,int rollno){
    roll * temp= (roll*)malloc(sizeof(roll));
    temp->num = rollno;

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
   return ptr != NULL;  // 1 if not empty, 0 if empty
}

int isempty(roll *ptr){
    return ptr == NULL;   // 1 if empty, 0 if not empty
}

void printqueue(roll *head){
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


