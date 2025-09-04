#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "student_delete.h"

extern roll *rollhead;

void delete_node(node **ptr, int n){
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