#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    FILE *fsrc = fopen(argv[1],"r");
    FILE *fdest = fopen("Replace.txt","w");
    if(fsrc == NULL){
        printf("No File is Found");
        return 0;
    }

int len = strlen(argv[3]);
char buffer[256];
char* ptr;
char *temp;

    while (fgets(buffer,256,fsrc)!= NULL)
    {   ptr = buffer;
        while(temp != NULL){
            if(temp = strstr(ptr,argv[2])){
                for(int i = 0;i<len;i++)
                    temp[i] = argv[3][i];
            }
        }
        
        
    }
    
}