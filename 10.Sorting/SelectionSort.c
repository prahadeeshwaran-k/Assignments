//class notes
#include<stdio.h>
void printArr(int *,int);

int main(){
    int arr[] = {20,34,21,52,1,4,12,63,123,12312,42,73,61};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp;
    printArr(arr,n);
    for(int i = 0; i<n-1 ;i++){
        for(int j = i;j<n;j++){
            if(arr[i]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\n");
    printArr(arr,n);
}

void printArr(int array[],int N){
    for(int i = 0 ;i<N;i++){
        printf("%d ",array[i]);
    }
}



