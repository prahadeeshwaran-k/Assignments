//date:14/6/2025-sat
//chapter:control statement
//Title: Power of a Number
// Description: This program calculates the power of a number using a while loop.
#include<stdio.h>
int main(){
    int x,y,result = 1;
    printf("Enter the num and power: ");
    scanf("%d %d",&x,&y); //! My Mistake scanf("%d,%d",&x,&y); no comma in " " use space.
    while( y!=0 )
    {
        result *= x;
        --y;
    }
    printf("%d",result);
}