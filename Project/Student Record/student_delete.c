#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "student_delete.h"
#include <string.h>

extern roll *rollhead;

void delete_noderoll(node **ptr, int n){
    node *prev;
    node *temp = *ptr;

    while (temp != NULL)
    {
        if(temp->roll == n){
            enque(&rollhead,temp->roll);//reserve the roll number
            //if is only for the head node is a target node
            if(temp == *ptr)
                *ptr = temp->next;
            else
                prev->next = temp->next;  //* also : prev->next->next;
            free(temp);
            return;
        }
        else{
            //for update the position to next 
            prev = temp;
            temp = temp->next;
        }
    }
}

void delete_nodename(node **ptr,char* str){
    node *prev;
    node *temp = *ptr;

    while (temp != NULL)
    {
        if(strcmp(str,temp->name) == 0){
            enque(&rollhead,temp->roll);//reserve the roll number
            //if is only for the head node is a target node
            if(temp == *ptr)
                *ptr = temp->next;
            else
                prev->next = temp->next;  //* also : prev->next->next;
            free(temp);
            return;
        }
        else{
            //for update the position to next 
            prev = temp;
            temp = temp->next;
        }
    }
}


void delete_all(node **head){
    node *temp;

    while (*head != NULL)
    {
        temp = *head;
        *head = temp->next;
        free(temp);
    }
}
