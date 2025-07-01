#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the String: ");
    scanf("%[^\n]", &str);
    int i = 0;
    int alphabet = 0,integer = 0,special = 0;
    while (str[i])
    {
        if(str[i]>= '0' && str[i]<= '9'){
            integer++;
        }
        else if((str[i]>= 'A' && str[i]<= 'Z') || (str[i]>= 'a' && str[i]<= 'z')){
            alphabet++;
        }else{
            special++;
        }
        i++;
    }
    printf("------------------------------------\n");
    printf("Alphabet = %d\nInteger = %d\nspecial =  %d",alphabet,integer,special);
    
}