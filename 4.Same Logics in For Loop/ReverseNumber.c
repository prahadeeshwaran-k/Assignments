#include<stdio.h>
#include<math.h>
int main(){
	int num,rev = 0;
	printf("enter the number: ");
	scanf("%d",&num);
	int n = (log10(num)+1); 
	for(int i =1;i<=n;i++){
		rev = (rev*10)+(num%10);
		num/= 10;
	}
	printf("%d \n",rev);
}
