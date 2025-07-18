#include<stdio.h>
int main(){
    int max,arr[10]={2,57,29,98,99,22,71,33,89,10};

    max = arr[0];
    for(int i = 0; i<10;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("Maximum : %d",max);
}