#include<stdio.h>

#define PRDO(x) if (x == 0) printf("Out for a Duck\n")

int main()
{
    int runs = 0;

    if (runs < 100)

        PRDO(runs);
    
    else
        printf("Scored runs %d\n",runs);

    return 0;
}