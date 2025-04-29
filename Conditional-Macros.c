#include <stdio.h>

// MACRO definition
#define COUNTRY "INDIA"

int main()
{
    // If COUNTRY is defined, print a message
    #ifdef COUNTRY
        printf("Country is defined\n");
    #endif

    // If STATE is not defined, define it 
    #ifndef STATE
        printf("State is not defined. Defining state. \n");
        #define STATE "ANDHRA PRADESH"
    #endif

    printf("State is: %s\n", STATE);

    return 0;
}