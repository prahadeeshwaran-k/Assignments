#include<stdio.h>
int main(){
    int max,max2,arr[10]={2,57,29,98,99,22,71,33,89,10};

    max = max2 = arr[0];

    for(int i = 0; i<10;i++){
        if(max < arr[i]){
            max2 = max;
            max = arr[i];
        }
        if(arr[i] > max2 && arr[i] !=  max){
            max2 = arr[i];
        }
        
    }
    printf("Maximum 1st : %d\n",max);
    printf("Maximum 2nd : %d",max2);
}