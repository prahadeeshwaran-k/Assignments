#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include"queue.h"//this store the removed roll number
#include"student_add.h"
#include"student_delete.h"
#include"student_modify.h"
#include"student_save.h"
#include"student.h"
#include"menu.h"
#include"student_sort.h"
#include"colour.h"

int rollno;
char name[50];
float marks;
char quit;

roll *rollhead = NULL;

void print(node * head);

int main(){
    
    node *hptr = NULL;//head pointer

    do{
        system("clear");
        printMenu(menu1, mainmenu,"Students Record");
        
        char ch;
        printf(BOLD_BLUE "Enter a choice : " RESET);
        scanf(" %c", &ch);
        ch = toupper(ch);

        switch (ch) {

        case 'A': //Add New Record
            system("clear");
            printf(BOLD_CYAN "Add Student\n"RESET);
            add_end(&hptr);
            break;


        case 'D': //Delete Record
            system("clear");
            printMenu(menu2, menu2size,"Delete Record");
            char op_D;
            printf("Enter a choice : ");
            scanf(" %c", &op_D);
            op_D = toupper(op_D);
            switch (op_D)
            {
            case 'R':
                printf("Enter a Roll number : ");
                scanf(" %d", &rollno);
                delete_noderoll(&hptr,rollno);
                break;
            case 'N':
                printf("Enter a Student Name : ");
                scanf(" %[^\n]", name);
                delete_nodename(&hptr,name);
                break;
            default:
                break;
            }
            break;


        case 'S': //Show the List
            system("clear");
            print(hptr);
            printf("Enter Q/q to go Menu: ");
            scanf(" %c",&quit);
            break;


        case 'M': //Modify a Records
            system("clear");
            printMenu(menu3, menu3size,"Modify Records");

            char op_M;
            printf("Enter a choice : ");
            scanf(" %c", &op_M);
            op_M = toupper(op_M);

            switch (op_M)
            {
            case 'R': 
                printf("Enter Roll number to modify : ");
                scanf("%d", &rollno);
                modifyroll(hptr, rollno);
                break;
            case 'N': 
                printf("Enter Student Name to modify : ");
                scanf(" %[^\n]", name); 
                modifyname(hptr, name);
                break;
            case 'M': 
                printf("Enter Marks to modify : ");
                scanf("%f", &marks);
                modifymarks(hptr, marks);
                break;
            default:
                printf("Invalid choice!\n");
                break;
            }
            break;


        case 'V': //Save
            save(hptr);
            system("clear");
            printf("File save as student.dat.txt\n");
	    system("cat student.dat.txt");
            printf("Enter Q/q to go Menu: ");
            scanf(" %c",&quit);
            break;


        case 'E': //Exit
            return 0;
            break;


        case 'T': //Sort The List
	    bubbleSortmarks(hptr);
	    system("clear");
            printMenu(menu2, menu2size,"Sort Record");
            char op_T;
            printf("Enter a choice : ");
            scanf(" %c", &op_T);
            op_T = toupper(op_T);
            switch (op_T)
            {
            case 'N':
                printf("SORTED by Name");
                break;
            case 'P':
                printf("SORTED by Marks");
	    case 'R':
                printf("SORTED by Roll");
                break;
            default:
                break;
            }
	    print(hptr);
	    printf("Enter Q/q to go Menu: ");
            scanf(" %c",&quit);
            break;


        case 'L': //Delete all the records
	    system("clear");
            delete_all(&hptr);
	    printf("all the students data deleted\n");
            printf("Enter Q/q to go Menu: ");
            scanf(" %c",&quit);
            
            break;


        case 'R': //Reverse The List
            system("clear");
	    reverselink(&hptr);
	    print(hptr);
	    printf("all the students data Reversed\n");
            printf("Enter Q/q to go Menu: ");
            scanf(" %c",&quit);
            break;


        default:
	    system("clear");
            printf("Invalid choice\n");
        }

    } while (1);

}


void print(node * head){
    node * temp = head;

    printf("Roll | Name | Marks\n");

    while(temp){
        printf("%d %s %f\n", temp->roll, temp->name, temp->marks);
        temp = temp->next;
    }
}

