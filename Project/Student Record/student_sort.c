#include <stdio.h>
#include <stdlib.h>
#include"student_sort.h"
#include<string.h>

// Bubble sort by swapping data values
void bubbleSort(node *head) {
    if (head == NULL) return;

    int swapped;
    node *ptr;
    node *last = NULL;
    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {
            if (ptr->roll > ptr->next->roll) {
		node temp;
                // Swap data only
                //int temp = ptr->data;
                //ptr->roll = ptr->next->roll;
                //ptr->next->roll = temp;
		memcpy(&temp, ptr, sizeof(node)-8);
		memcpy(ptr, ptr->next, sizeof(node)-8);
		memcpy(ptr->next, &temp, sizeof(node)-8);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr; 
    } while (swapped);
}

void bubbleSortname(node *head) {
    if (head == NULL) return;

    int swapped;
    node *ptr;
    node *last = NULL;

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {
            if (strcmp(ptr->name, ptr->next->name) > 0) {
		node temp;
                // Swap data only
                //int temp = ptr->data;
                //ptr->roll = ptr->next->roll;
                //ptr->next->roll = temp;
		memcpy(&temp, ptr, sizeof(node)-8);
		memcpy(ptr, ptr->next, sizeof(node)-8);
		memcpy(ptr->next, &temp, sizeof(node)-8);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr; 
    } while (swapped);
}

void bubbleSortmarks(node *head) {
    if (head == NULL) return;

    int swapped;
    node *ptr;
    node *last = NULL;

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {
            if (ptr->marks > ptr->next->marks) {
		node temp;
                // Swap data only
                //int temp = ptr->data;
                //ptr->roll = ptr->next->roll;
                //ptr->next->roll = temp;
		memcpy(&temp, ptr, sizeof(node)-8);
		memcpy(ptr, ptr->next, sizeof(node)-8);
		memcpy(ptr->next, &temp, sizeof(node)-8);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr; 
    } while (swapped);
}
