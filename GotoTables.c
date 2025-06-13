//date:12/6/2025-thur
//chapter:control statement
//Title:Multiplication Table using goto statement
#include<stdio.h>
int main(){
    int num1,num2,i=0;
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    printf("Enter the number 2: ");
    scanf("%d",&num2);
    printf("-----------------------------\n");
mul:
    i++;
    printf("%d x %d = %d\t%d x %d = %d\n",num1,i,num1*i,num2,i,num2*i);
    if(i<=10)
        goto mul;
}