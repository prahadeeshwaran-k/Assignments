//date:13/6/2025-fri
//chapter:control statement
//Title: Count the Digits in a Number
// This program counts the number of digits in a given number.
#include<stdio.h>
int main(){
    long long int num;
    int count=0;
    printf("Enter the number: ");
    scanf("%lld",&num);

    while(num!=0){
        num/=(long long int)10;
        ++count;
    }
    printf("The No.of DIGITS: %d",count);
}