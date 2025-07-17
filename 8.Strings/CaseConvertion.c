#include <stdio.h>

void uppercase(char *str){
    int i = 0;
    while(str[i]){
        if((str[i]>='A' && str[i]<='Z')){
           str[i] = str[i]^32;
        }
        i++;
    }
    printf("%s\n",str);
}

void lowercase(char *str){
    int i = 0;
    while(str[i]){
        if((str[i]>='a' && str[i]<='z')){
           str[i] = str[i]^32;
        }
        i++;
    }
    printf("%s\n",str);
}

int main()
{
    char str[] = "Vector India Chennai";
    uppercase(str);
    lowercase(str);
}
