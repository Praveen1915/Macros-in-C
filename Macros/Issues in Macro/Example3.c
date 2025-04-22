#include<stdio.h>

#define SWAP(dtype,x,y) {dtype t; t = x; x = y; y = t;}

int main()
{
    int a = 5, b = 6;

    SWAP(int, a, b)

    printf("a = %d, b = %d\n",a,b);

    return 0;
}