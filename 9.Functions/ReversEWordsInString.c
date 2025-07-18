//date:4/7/2025-thurs
//chapter:Strings
//Title: Reverse Words in a String
//Description: This program reverses the words in a given string.
//Example: "hello    vector   india" becomes "india   vector    hello"
#include<stdio.h>
#include<string.h>

void swap(int first,int last);
char str[256] = "hello    vector   india";

int main(){
    int i = 0, real = 0, size;
    
    size = strlen(str)+1; // * to find the total size of the character present int the array
    printf("%d",size) ;
    printf("\nBefore   :%s",str);

    swap(0,size-1);
    printf("\n1st Swap :%s",str);

    while (size>=0)// up to the \0
    {   
        if(str[i] == ' ' || str[i]=='\0'){
            swap(real,i);
            real = i+1;
        }
        i++;
        size--;
    }
    printf("\nAfter    :%s",str);

}

void swap(int first,int last){
    char temp;
    for(int i = first, j = last -1 ; i<j ; i++ ,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

}