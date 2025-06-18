#include <stdio.h>
#include <math.h>

int main() {

    for (int num = 1; num <= 100; num++)
    {   
        int flag =1;

        for (int j = 2; j <= sqrt(num); j++)
        {
            if ((num % j) == 0){
                flag = 0;
                break;
            }
        }

    if(flag && num !=1 && num !=2 && num%10 == 7)
        printf("%d ", num);

    }
}