#include "student_save.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void save(node *head)
{
    node *temp = (node *)malloc(sizeof(node));
    temp = head;
    FILE *fp = fopen("student.dat.txt", "w");
    fprintf(fp, "Roll | Name | Marks\n");
    while (temp)
    {
        fprintf(fp, "%d %s %f\n", temp->roll, temp->name, temp->marks);
        temp = temp->next;
    }
    fclose(fp);
}

void init(node **head)
{
    FILE *fp = fopen("student.dat.txt", "r");
    if (fp == NULL)
    {
        printf("No file present\n");
        return;
    }

    char dummy[100];
    fgets(dummy, sizeof(dummy), fp); // Skip header line

    int roll;
    char name[50];
    float marks;

    while (fscanf(fp, "%d %s %f", &roll, name, &marks) == 3)
    { // Check for the scanf read the successful 3 data
        node *temp = (node *)malloc(sizeof(node));
        temp->roll = roll;
        temp->marks = marks;
        strcpy(temp->name, name);
        temp->next = NULL;

        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            node *last = *head;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = temp;
        }
    }

    fclose(fp);
}