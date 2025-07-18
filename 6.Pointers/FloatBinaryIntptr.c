//date:25/6/2025-Wed
//chapter:Pointers
//Title: Float Binary using int pointer
// Description: This program generates the binary representation of a float value using an int pointer.
#include<stdio.h>
int main(){
    float f;
    printf("Enter a Float Value: ");
    scanf("%f",&f);

    int * fptr = (int*)&f;

    int n = sizeof(f)*8-1;
    for(int i = n; i>=0; i--){
        printf("%d",((*fptr)>>i)&1);
    }
}