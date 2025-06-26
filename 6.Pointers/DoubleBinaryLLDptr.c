//double  76.32 = 01000000 01010011 00010100 01111010 11100001 01000111 10101110 00010100
//Most accurate representation = 7.6319999999999993178789736703E1
//date:26/6/2025-thur
//chapter:Pointers
//Title: Double Binary using long long int pointer
//Description: This program generates the binary representation of a double value using a long long int pointer.

#include<stdio.h>
int main(){
    double db;
    printf("Enter a double: ");
    scanf("%lf",&db);
    int bits = sizeof(double)*8-1;
    long long int *n = (long long int*)&db;
    for(int i=bits;i>=0;i--){
        printf("%d",((*n) >> i)&(long long int)1);
    }
}