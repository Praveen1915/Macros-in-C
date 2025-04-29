#include<stdio.h>

#define SIZE 3

#define ARR 2,\
2,\
3

int main()
{
    int arr[SIZE] = {ARR};

    for (int i = 0; i < SIZE; i++)
    
        printf("Array values are: Array[%d]: %d\n",i, arr[i]);

    return 0;
}