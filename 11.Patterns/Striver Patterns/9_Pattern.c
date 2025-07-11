/*
____A    
___ABA
__ABCBA
_ABCDCBA
ABCDEDCBA
*/
#include <stdio.h>

void pattern1(int n){

    for(int i = 0 ; i<n ; i++ ){
        
        for(int space = 1 ;space <= n-i-1 ; space++){
            printf(" ");
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int star = 0;star<2*i+1;star++ ){
            printf("%c",ch);
            if(star >= breakpoint){
                ch--;
            }else{
                ch++;
            }
        }
        printf("\n");
    }
}

int main()
{   
    int n =5;
    pattern1(5);
    return 0;
}
