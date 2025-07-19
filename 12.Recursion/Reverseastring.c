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
                                                                          
  
