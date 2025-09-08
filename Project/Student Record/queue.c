#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void enque(roll**ptr,int rollno){
    roll * temp= (roll*)malloc(sizeof(roll));
    temp->num = rollno;
    //check if the the current node is head ptr and  (newnode)<(headnode)
    if((*ptr == NULL) || ((temp->num) < (*ptr)->num)){
        temp->next = *ptr;
        *ptr = temp;
    }else{
        roll*last = *ptr;
        //the present->next is not be null and the temp->roll < (present->next)->roll 
        while((last->next!=NULL)&&(temp->num > last->next->num)){
            last = last->next;
        }
        temp->next = last->next;
        last->next = temp;
    }
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


