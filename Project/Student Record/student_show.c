#include"student_show.h"
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void print(node * head){
    node * temp = head;

    printf("Roll | Name | Marks\n");

    while(temp){
        printf("%d %s %f\n", temp->roll, temp->name, temp->marks);
        temp = temp->next;
    }
}