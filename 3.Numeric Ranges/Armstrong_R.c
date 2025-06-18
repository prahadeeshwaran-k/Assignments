#include <stdio.h>
#include <math.h>

int main() {
    int sum,n,temp,digit;
    for(int num = 1;num<=1000000;num++){
        temp = num;
        n = (int)(log10(num)+1);
        sum = 0;
        for(int i = 1;i<=n;i++){
            digit = temp % 10;
            sum += pow(digit,n);
            temp /= 10;
        }
        if (num == sum)
        printf("%d ",num);
    }
}

