//date:16/6/2025-sat
//chapter:control statement
//Title: Fibonacci Series
//Description: This program generates the Fibonacci series up to a given number of terms.
//*note:in Fibonacci we need to print the the a or i or x means thge 1st vaule

#include<stdio.h>
int main(){
    
    int i=0, j=1,x,result;
    printf(" enter how many series:");
    scanf("%d",&x);

        while (x != 0)
        {
            printf("%d ",i);
            result = i+j;
            i=j;
            j=result;
            x--;
        }
    }
