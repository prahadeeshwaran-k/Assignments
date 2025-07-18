//Class Program
/*
1 
2 8
3 9 14
4 10 15 19
5 11 16 20 23
6 12 17 21 24 26
7 13 18 22 25 27 28
*/

#include<stdio.h>
int main(){

    int n = 7;
    int temp,diff;
    for(int i=0 ; i <n ; i++){
        temp = i+1;
        diff=n-1;
        for(int j = 0 ; j < (i+1) ; j++){
            printf("%d ",temp);
            temp += diff;
            --diff;
        }
        printf("\n");
    }
}