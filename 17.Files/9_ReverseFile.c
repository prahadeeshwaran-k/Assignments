//Write a Program to reverse the Contents of a given file.
#include <stdio.h>
int chcount;
int main() {
	char ch;
	FILE*fp = fopen("text.txt","r");
	FILE*fd = fopen("rev.txt","w");

	if(fp == NULL) {
		printf("file is exist");
		return 0;
	}

	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	printf("%d\n",size);
	
	for (int pos = 1; pos <= size; pos++) {
        fseek(fp,-pos,2);
		ch = fgetc(fp);
		fputc(ch,fd);
	}
	printf("OPERATION SUCCESS\n");

}
