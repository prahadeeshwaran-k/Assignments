//date:11/6/2025-wed
//chapter:control statement
#include<stdio.h>
int main(){
    char var;
    printf("Enter:");
    scanf(" %c",&var);

    if((var>='A' && var<='Z')){
        printf("UPPERCASE");
    }
    else if((var>='a' && var<='z')){
        printf("lowercase");
    }
    else if((var>='0' && var<='9')){
        printf("Integer");
    }
    else{
        printf("Special character");
    }
    
}