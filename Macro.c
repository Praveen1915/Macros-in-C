//Example Of Macros In C

#include<stdio.h>

// Define a macro for calculating the square of a number
#define SQUARE(x) ((x) * (x))

// Define a macro for finding the maximum of two numbers
#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main()
{
    int num1 = 5, num2 = 8;

    // Using the SQUARE macro to calculate the square of a number
    printf("Square of %d is: %d\n",num1, SQUARE(num1));

    printf("Square of %d is: %d\n", num2, SQUARE(num2));

    // Using the MAX macro to find the maximum of two numbers
    printf("Maximum of %d and %d is: %d\n", num1, num2, MAX(num1, num2));

    return 0;
}