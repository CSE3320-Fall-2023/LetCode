#include "app.h"
#include "../library/libc/libc.h"

char* ColorEnumToString[MAX_COLOR+1] = 
{
    "BLUE",
    "GREEN",
    "YELLOW",
    "PURPLE",
    "UNDEFINED"
};

int main( int argc, char *argv[] )
{
    printf ("Hello from the color application\n");
    printf ("My color is %s\n", ColorEnumToString[getcolor( getpid() )]);

    setcolor( getpid(), PURPLE ); 

    printf ("My color is %s\n", ColorEnumToString[getcolor( getpid() )]);
}