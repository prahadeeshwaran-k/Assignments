// date: 19/07/2025 - Saturday
// chapter: Strings
// Title: Reverse a String using Two-Pointer Method
// Description: This program reverses a given string in-place using a two-pointer approach.
// Example: Input: "Hello Vanakkam Hola" → Output: "aloH makkanaV olleH"
#include<stdio.h>
#include<string.h>

void revfunction(char * str ,int i, int j){
    char temp ;
    if(i<j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
        revfunction(str,i,j);
    }
}

int main(){
        char str[] = "Hello Vanakkam Hola";
        revfunction(str,0,strlen(str) -1);
        printf("%s",str);
}
                                                                          
  
