#include "student_save.h"
#include <stdio.h>
#include <stdlib.h>


void save(node *head){
    node *temp = (node*)malloc(sizeof(node));
    temp = head;
    FILE *fp = fopen("student.dat.txt","w");
    fprintf(fp,"Roll | Name | Marks\n");
    while (temp)
    {
        fprintf(fp,"%d %s %f\n", temp->roll, temp->name, temp->marks);
	temp = temp->next;
    }
    fclose(fp);
}
