/******************************************************************************
    1
   2*3
  3*4*5
 4*5*6*7
5*6*7*8*9
 6*7*8*9
  7*8*9
   8*9
    9

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num =4;
    int index = 1;
    
    for(int i =-num,temp =1; i<=num;i++,temp++){
        int absn =abs(i);
        for(int s = 0;s < absn;s++){
            printf(" ");
        }
        index = temp;
        
        for(int st = 0 ;st<2*(num-absn)+1;st++){
            if(st%2 == 0){
                printf("%d",index);
                index++;
            }else{
                printf("*");

            }
        }
        printf("\n");
    }
}
