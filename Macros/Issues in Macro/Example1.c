#include<stdio.h>

#define PRDO(x,y) x*y

int main()
{
    printf("%d\n",PRDO(2,4));
    printf("%d\n",PRDO(1+1,2+2));
    printf("%d",60/PRDO(2,4));

    return 0;
}