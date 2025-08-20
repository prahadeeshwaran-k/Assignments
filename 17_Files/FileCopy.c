#include<stdio.h>
int main(int argc, char * argv[]){
	FILE *fsrc = fopen(argv[1],"r");
	if(fsrc == NULL){
		printf("source file is not present\n");
		return 0;
	}

	FILE *fdest;
	char op;
	fdest = fopen(argv[2],"r");

	if(fdest != NULL){
		printf("File is already Exist\n");
		scanf("Do you want to OVERWRITE-Enter Y: %c",&op);
		
		if(op == 'y' || op =='Y'){
			fclose(fdest);
			goto lable;
		}
		else{
			printf("Copy Opeation is canceled");
			return 0;
		}
	}

	lable :

	fdest = fopen(argv[2],"w");
	char ch;
	while((ch = fgetc(fsrc)) != EOF){
		fputc(ch,fdest);
	}
	fclose(fdest);

}
