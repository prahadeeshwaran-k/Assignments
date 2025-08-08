#include<stdio.h> 
#include<string.h>
char* mystrstr(char * s,char *key){
    int i = 0;
    while(s[i]){
        for(int j = 0;j<strlen(key);j++){
            if(!(s[i+j]==key[j])){
                break;
            }
            return(&s[i]);
        }
        i++;
    }
}

int main(){
    char s[] = "wekvhkabc123";
    char key[] = "abc";
    printf("%s\n",mystrstr(s,key));
}