//date:3/7/2025-thurs
//chapter:Strings
//Title: Reverse Words in a String
//Description: This program reverses the words in a given string.
//Example: "hello    vector   india" becomes "olleh    rotcev   aidni"
#include<stdio.h>
#include<string.h>
void swap(int first,int last);
char str[256] = "hello    vector   india";

int main(){
    int i = 0;
    int real = 0;
    int size;
    printf("\nBefore : %s",str);
    size = strlen(str);
    
    while (size>=0)// up to the \0
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
    char temp;
    for(int i = first, j = last -1 ; i<j ; i++ ,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

}