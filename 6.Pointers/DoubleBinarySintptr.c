//double  76.32 = 01000000 01010011 00010100 01111010 11100001 01000111 10101110 00010100
//Most accurate representation = 7.6319999999999993178789736703E1
//date:26/6/2025-thur
//chapter:Pointers
//Title: Double Binary using short int pointer
// Description: This program generates the binary representation of a double value using a short int pointer.

#include<stdio.h>
int main(){
    double db;
    printf("Enter a double: ");
    scanf("%lf",&db);
    short int *n = (short int*)&db;
    n += 3;
    for(int i= 3;i>=0;i--){
        for(int j =15;j>=0;j--){
            printf("%d",((*n) >> j)&(short int)1);
        }
        printf(" ");
        n--;
    }
}