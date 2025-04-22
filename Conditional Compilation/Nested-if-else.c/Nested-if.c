#include<stdio.h>

#define FLAG 8

int main()
{
    int a = 1, b = 2;

    #if FLAG == 0

        printf("Value of FLAG is ZERO\n");
        a++;
        b++;

    #elif FLAG == 1

        printf("Value of FLAG is ONE\n");
        a--;
        b--;

    #elif FLAG == 2

        printf("Value of FLAG is TWO\n");
        a = a-3;
        b = b-3;

    #else

        printf("Value of FLAG is greater than TWO or less than ZERO\n");
        a = a + b;
        b = a - b;

    #endif
        printf("a = %d, b = %d\n", a,b);

        printf("program completed\n");

    return 0;
}