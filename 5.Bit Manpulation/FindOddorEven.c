//date:19/6/2025-sat
//chapter:control statement
//Title: Find Odd or Even using Bit Manipulation
//Description: This program checks if a given number is odd or even using bit manipulation.
#include<stdio.h>
int main(){
    int bit,mask;
    mask = 1<<0;
    printf("enter the number: ");
    scanf("%d",&bit);

    if((bit&mask)==0){
        printf("The given number is even: ");
    }else{
        printf("The given number is odd: ");
    }

}