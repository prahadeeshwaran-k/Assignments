#include<stdio.h>
#define sum(a,b) a+b
#define multiply(x,y) x*y //! Important if ther is a space in between "macro_()" gcc throw error
#define multi(x,y) (x)*(y)
int main(){
    printf("%d\n",sum(2,4));
    int x = 5, y = 3;
    printf("%d\n",multiply(x+5,y-2));
    /*What we think
    multiply(5+5,3-2)
            (10,1)
            10*1
            10
    But NO
    multiply(x+5,y-2)-> x+5*y-2
                        5+(5*3)-2
                        5+15-2
                        20-2
                        18  */
    //** FIX multi(x,y) (x)*(y) -> (x+5)*(y-2) -> (5+5)*(3-2) ->10
    printf("%d\n",multi
        (x+5,y-2));
}