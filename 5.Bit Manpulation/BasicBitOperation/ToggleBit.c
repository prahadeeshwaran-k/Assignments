//date:12/6/2025-sat
//chapter:control statement
//Title: Toggle the Specific Bit using Bit Manipulation
//Description: This program toggles a specific bit using bit manipulation.
#include<stdio.h>
int main(){
    int num, mask, pos, result, n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    n = sizeof(num) * 8 - 1;

    // print the given number
    printf("Before %d : ", num);
    for(int i =n ; i>=0 ; i--){
        printf("%d", (num >> i) & 1);
    }

    mask = 1 << pos;
    result = num ^mask;

    // print the Bit Mapulated number
    printf("\nAfter %d : ", result);
    for(int i =n ; i>=0 ; i--){
        printf("%d", (result >> i) & 1);
    }
}