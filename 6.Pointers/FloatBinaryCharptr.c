//date:25/6/2025-Wed
//chapter:Pointers
//Title: Float Binary using char pointer
// Description: This program generates the binary representation of a float value using a char pointer.
#include<stdio.h>
int main(){
    float f;
    printf("Enter a Float Value: ");
    scanf("%f",&f);

    char * fptr = (char*)&f;
    fptr= fptr+3;
    for(int j =1;j<=4;j++){
        for(int i = 7; i>=0; i--)
        {
        printf("%d",((*fptr)>>i)&1);
        }
        fptr--;
    }
    
}
