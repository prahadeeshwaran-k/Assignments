#include<stdio.h>
int main(){
    int arr[10]={10,20,50,80,50,20,10,40,70,60};
    int count;
    for(int i =0;i<10;i++){
        count = 1;

        int found = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }

        if (found) {
            continue; // skip counting this duplicate
        }

        for(int j = i+ 1;j<10;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count>1){
            printf("%d %d\n",arr[i],count);
        }
    }
}