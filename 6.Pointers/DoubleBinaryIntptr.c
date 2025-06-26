//double  76.32 = 01000000 01010011 00010100 01111010 11100001 01000111 10101110 00010100
//Most accurate representation = 7.6319999999999993178789736703E1
//date:26/6/2025-thur
//chapter:Pointers
//Title: Double Binary using char pointer
// Description: This program generates the binary representation of a double value using a int pointer.

#include<stdio.h>
int main(){
    double db;
    printf("Enter a double: ");
    scanf("%lf",&db);
    int *n = (int*)&db;
    n += 1;
    for(int i= 1;i>=0;i--){
        for(int j =31;j>=0;j--){
            printf("%d",((*n) >> j)&(int)1);
        }
        printf(" ");
        n--;
    }
}