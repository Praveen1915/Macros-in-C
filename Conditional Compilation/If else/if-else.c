#include<stdio.h>

#define FLAG 8

int main()
{
    int a = 5, b = 6;

    #if FLAG >= 3

        printf("Value of FLAG is greater than or equal to 3\n");
        a = a + b;
        b = a * b;

    printf("Values changed after swap: ");

    #endif
        printf("a = %d, b = %d\n", a,b);

    printf("program completed\n");

    return 0;
}