#include<stdio.h>
int main(){
	int  num,sum=0;
	printf("Enter The number: ");
	scanf("%d",&num);	
	for(int i=num;i!=0;){
		sum+=1;
		i/=10;
	}
	printf("the sum of digits is %d",sum);
}

