#include<stdio.h>

#define FLAG 8

int main()
{
    int a = 1, b = 2;

    #if FLAG >= 3

        printf("Value of FLAG is greater than or equal to 3\n");
        a = a + b;
        b = a * b;

    #else

        printf("Value of FLAG is less than or equal to 3\n");
        a = a * b;
        b = a * b;

    #endif
        printf("a = %d, b = %d\n", a,b);

    printf("program completed\n");

    return 0;
}