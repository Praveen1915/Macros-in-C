#include <stdio.h>

// Function to fund sum of two numbers
int sum (int a, int b)
{
    return (a + b);
}

// Function like Macro for above function 
#define SUM(a, b) (a + b)

int main()
{
    printf("SUM using Function: %d\n", sum(100, 200));
    printf("SUM using Macro: %d\n", SUM(100, 200));
    
    return 0;
}