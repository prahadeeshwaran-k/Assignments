#include <stdio.h>

#define LENGTH 20
#define BUFFER_SIZE 100

#define LINUX

#ifdef LINUX
    #define BUFFER2_SIZE 100
#endif

#ifdef MAC
    #define BUFFER2_SIZE 200
#endif

#ifdef WINDOWS
    #define BUFFER2_SIZE 300
#endif

#define DEBUG_MODE  
#undef DEBUG_MODE // This will delete the Debug Mode

#define SERIAL_MODE

int main(){

    #ifdef DEBUG_MODE
        printf("Debug mode!\n");
    #else
        printf("Not Debug mode! from else\n");
    #endif

    #ifndef DEBUG_MODE
        printf("Not Debug mode!\n");
    #endif

    #if defined(SERIAL_MODE)
        printf("Serial Mode!\n");
    #endif
    
    #if !defined(SERIAL_MODE)
        printf("Not Serial Mode!\n");
    #endif

    printf("length : %d\n",LENGTH);
    printf("BUFFER-1 : %d\n",BUFFER_SIZE);
    printf("BUFFER-2 : %d\n",BUFFER2_SIZE);

    //printf("This FileName : %s\n",__FILE__);//inbuild Macro
    //printf("Date : %s\n",__DATE__);
    //printf("TIME : %s\n",__TIME__);
    return 0;
}
