//date:13/6/2025-fri
//chapter:control statement
//Title: Count of Odd and Even Digits in a Number
// This program counts the number of odd and even digits in a given number.
#include<stdio.h>
int main(){
    int odd = 0, even =0 ;
    long long int num;
    printf("Enter a Number: ");
    scanf("%lld",&num); //lld% is used for long long int type

    while(num !=0){
        int temp = num%10;
        (temp%2 == 0)? ++even : ++odd;
        num /= 10;
    }
    printf("even: %d & odd: %d",even,odd);
}