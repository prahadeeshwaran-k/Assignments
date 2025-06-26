//date:25/6/2025-Wed
//chapter:Pointers
//Title: Float Binary using short int pointer
// Description: This program generates the binary representation of a float value using a short int pointer.
#include<stdio.h>
int main(){
    float f;
    printf("Enter a Float Value: ");
    scanf("%f",&f);

    short int  * fptr = (short int *)&f;

    for(int j =1;j<=2;j++){
        for(int i = 15; i>=0; i--)
        {
        printf("%d",((*fptr)>>i)&1);
        }
        fptr++;
    }
    
}
