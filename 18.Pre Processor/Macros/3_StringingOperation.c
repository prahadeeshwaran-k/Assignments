#include<stdio.h>
#define SerialPrint(x) printf(#x)

int main(){
    SerialPrint("Hello\t"); //-> printf("\"Hello\t\"");
    SerialPrint("World\n"); //-> printf("\"World\n\"");
    //o/p:"Hello\t""World\n" 
    //! So dont use double quotes 
    /*Explanation: The # operator in the macro PRINT_STRING(x) 
    converts the argument x into a string by enclosing it into double quotes*/
    SerialPrint(\nHello\t);
    SerialPrint(World\n);
}