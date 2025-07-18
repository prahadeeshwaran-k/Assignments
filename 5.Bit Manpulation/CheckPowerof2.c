//date:20/6/2025-sat
//chapter:control statement
//Title: Check if a number is a power of 2
//Description: This program checks if a given number is a power of 2 using bit manipulation.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if( (num & (num-1)) == 0){
        printf("Yes! %d is power of 2",num);
    }else{
        printf("No! %d is not a power of 2",num);
    }

}