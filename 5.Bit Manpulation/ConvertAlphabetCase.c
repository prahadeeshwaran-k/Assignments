//date:20/6/2025-sat
//chapter:control statement
//Title: Convert Alphabet Case using Bit Manipulation
//Description: This program converts the case of a given alphabet using bit manipulation.
#include<stdio.h>
int main(){
    char alph,mask,result;
    printf("Enter the Alphabet: ");
    scanf("%c",&alph);

    if(alph >= 'A' && alph<='Z' || (alph >= 'a' && alph <= 'z') ){
        printf("Before %c:",alph);
        mask = (1<<5);
        result = alph^mask;//else use alph^32 is same
        printf("\nAfter %c:",result);
    }
    else
    {
        printf("Error: Not an alphabet character. Cannot convert case.\n");
    }
    
}
