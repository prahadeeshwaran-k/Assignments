//date:9/7/2025-Wed
//chapter:Pattern
#include<stdio.h>
    int main(){
        int n  = 5;
        int num =1;
        printf("Enter the number to the Pattern:");
        scanf("%d",&n);

        for(int i= 0;i<n;i++){
            //Spaces
            for(int s = 0 ; s<n-i-1 ; s++)
                printf(" ");
            //Stars
            for(int s = 0 ; s<i*2+1; s++){
                if(i%2 != 0){
                    printf("*");
                }else{
                    printf("%d",num);
                }
            }
            //Spaces
            for(int s = 0 ; s<n-i-1 ; s++ )
                printf(" ");

            if(i%2==0)
                ++num;
            printf("\n");
        }
    }
