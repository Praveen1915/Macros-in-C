#include <stdio.h>

#define SWAP(x,y,T) do { \
                    T temp = (*x);\
                    (*x) = (*y); \
                    (*y) = temp; \
                    } while (0)

int main(void)
{
    int a = 5, b = 9;

    printf("Value of a and b before swaping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    //Swap the number
    SWAP(&a,&b,int);

    printf("\n\nValue of a and b After swaping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    return 0;
}