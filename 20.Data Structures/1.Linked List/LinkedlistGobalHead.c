#include<stdio.h>
#include <stdlib.h>
typedef struct student{
    int roll;
    char name[16];
    float marks;
    struct student *next;
} node;

node * head  = NULL; 

void add_begin();
void print();
void save();

int main(){
    add_begin();
    add_begin();
    add_begin();
    add_begin();
    print();
    save();
}

void add_begin(){
    node * temp= (node*)malloc(sizeof(node));

    printf("Enter the The Details : Roll | Name | Marks\n");
    scanf("%d %s %f", &temp->roll, temp->name, &temp->marks);

    temp->next = head;
    head = temp;
}

void print(){
    node * temp = (node*)malloc(sizeof(node));
    temp = head;

    printf("Roll | Name | Marks\n");

    while(temp){
        printf("%d %s %f\n", temp->roll, temp->name, temp->marks);
        temp = temp->next;
    }
}

void save(){
    node *temp = (node*)malloc(sizeof(node));
    temp = head;
    FILE *fp = fopen("data.txt","w");
    fprintf(fp,"Roll | Name | Marks\n");
    while (temp)
    {
        fprintf(fp,"%d %s %f\n", temp->roll, temp->name, temp->marks);
	temp = temp->next;
    }
    fclose(fp);
}
