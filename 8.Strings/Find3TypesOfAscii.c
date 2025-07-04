//date:1/7/2025-tues
//chapter:Strings
//Title: Find 3 Types of ASCII
//Description: This program finds and counts 3 types of ASCII characters in a string: alphabets, integers, and special characters.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the String: ");
    scanf("%[^\n]",str);
    int i = 0;
    int alphabet = 0,integer = 0,special = 0;
    while (str[i])
    {
        if(str[i]>= '0' && str[i]<= '9'){
            integer++;
        }
        else if((str[i]>= 'A' && str[i]<= 'Z') || (str[i]>= 'a' && str[i]<= 'z')){
            alphabet++;
        }else if(str[i] != ' '){
            special++;
        }
        i++;
    }
    printf("------------------------------------\n");
    printf("Alphabet = %d\nInteger = %d\nspecial =  %d",alphabet,integer,special);
    
}
