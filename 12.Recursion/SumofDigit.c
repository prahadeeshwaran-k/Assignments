// date: 19/07/2025 - Saturday
// chapter: Recursion
// Title: Sum of Digits using Recursion
// Description: This program calculates the sum of digits of a number using a recursive function.
// Example: Input: 123456 → Output: 21

#include<stdio.h>

int sumofdigit(int num, int result){
    int temp = num;
        if(temp){
                 result += temp%10;
                 temp /= 10;
                 return sumofdigit(temp,result);
        }
        return result; // Added return statement for the base case
}

int main(){
        int num = 123456;
        printf("%d",sumofdigit(num,0));
}
                                                                          
  
