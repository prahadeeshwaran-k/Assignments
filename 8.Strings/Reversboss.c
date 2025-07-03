#include<stdio.h>

void swap(int first,int last);
char str[256] = "hello    vector   india";

int main(){
    int i = 0;
    int real = 0;
    int size = 1;
    printf("\nBefore : %s",str);

    while (str[i])
    {
        size++; i++;
    }

    i = 0;
    
    while (size>=0)
    {   
        if(str[i] == ' ' || str[i]=='\0'){
            swap(real,i);
            real = i+1;
        }
        i++;
        size--;
    }
    printf("\nAfter  : %s",str);

}

void swap(int first,int last){
    int n = last;
    char temp;
    for(int i = first, j = n -1 ; i<j ; i++ ,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

}