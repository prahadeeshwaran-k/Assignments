#include"student_add.h"
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include"colour.h"


extern roll *rollhead; 

void add_end(node **head) {
    int roll;
    node *temp  = (node*)malloc(sizeof(node));
    printf(MAGENTA "Enter the Student:" RESET COLOR_226" Name\n"RESET);
    scanf(" %[^\n]", temp->name);//Here we are add only Name
    printf(MAGENTA "Enter the Student:" RESET COLOR_226" Mark\n"RESET);
    scanf("%f", &temp->marks);//Here we are add only marks

    if (*head == NULL) {
        temp->roll = 1;
        temp->next = NULL;
        *head = temp;
    } else {
        if (!isempty(rollhead)) {
            roll = deque(&rollhead);
            temp->roll = roll;
        } else {
            node *last = *head;
            int maxRoll = 0;
            while (last != NULL) {
                if (last->roll > maxRoll)
                    maxRoll = last->roll;
                last = last->next;
            }
            temp->roll = maxRoll + 1;
        }
        temp->next = NULL;
        // add to end of list AKA the linking process
        node *last = *head;
        while (last->next != NULL)
            last = last->next;
        last->next = temp;
    }
}
