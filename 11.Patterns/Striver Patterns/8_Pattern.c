/*
*
**
***
****
*****
****
***
**
*
*/
#include <stdio.h>

int main()
{
    int n =5;
    for(int i =1; i<= (n*2)-1; i++ ){
        int star = i;
        if(i>n){
            star = 2*n-i;
        }
        for(int j = 0 ;j < star ;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
