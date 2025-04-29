#include<stdio.h>

//Macro definition
#define TRUE 1
#define FALSE 0

int main()
{
    printf("True: %d\n",TRUE);
    printf("False: %d\n",FALSE);

    //Undefine previously defined Macro

    #undef TRUE
    #undef FALSE

    //Re-define Macro values

    #define TRUE 0
    #define FALSE 1

    printf("\nMacro values are redefinition:\n");
    printf("True: %d\n",TRUE);
    printf("False: %d\n",FALSE);

    return 0;
}