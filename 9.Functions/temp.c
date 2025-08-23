#include<stdio.h>
#include<string.h>

int main() {
	FILE* fsrc = fopen("text.txt","r");
	FILE* fdest = fopen("replace.txt","w");

	char key[] = "hello";
	char replace[] = "hi";

	char buffer[256];

	while(fscanf(fsrc,"%s",buffer) == 1) {

		char buffer2[256];
		char* srcptr = buffer;
		char* destptr = buffer2;
		char *temp;

		while((temp = strstr(srcptr,key))!= NULL) {
			strncpy(destptr,srcptr,temp-srcptr);
			destptr += temp-srcptr;

			strcpy(destptr,replace);
			destptr += strlen(replace);

			srcptr = temp + strlen(key);
		}

		strcpy(destptr,srcptr);
		fprintf(fdest, "%s", buffer2);
		buffer = {'\0'};
	}
	printf("ok");
	fclose(fsrc);
	fclose(fdest);
    
}
