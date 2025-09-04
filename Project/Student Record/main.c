#include<stdio.h>
#include<stdlib.h>
#include"queue.h"//this store the removed roll number
#include"student_add.h"
#include"student_delete.h"

roll *rollhead = NULL; 

void print(node * );

int main(){
    char menu[][50] = {
        "1. a/A : Add New Record",
        "2. d/D : Delete Record",
        "3. s/S : Show the List",
        "4. m/M : Modify a Records",
        "5. v/V : Save"
    };
    node *hptr = NULL;
    add_end(&hptr);
    add_end(&hptr);
    add_end(&hptr);
    print(hptr);
    delete_node(&hptr,2);
    print(hptr);
    add_end(&hptr);
    print(hptr);
    add_end(&hptr);
    add_end(&hptr);
    print(hptr);
    
}


void print(node * head){
    node * temp = head;

    printf("Roll | Name | Marks\n");

    while(temp){
        printf("%d %s %f\n", temp->roll, temp->name, temp->marks);
        temp = temp->next;
    }
}

void menu(){

}
