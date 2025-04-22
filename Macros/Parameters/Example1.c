#include<stdio.h>

#define SUM(x, y) ((x)+(y))
#define PROD(x, y) ((x) * (y))

int main()
{
    int l,m,i,j, a = 5, b = 6;

    float p, q;

    l = SUM (a,b);

    m = PROD (a,b);

    i = SUM (4,6);

    j = PROD(4,6);

    p = SUM (2.2,3.4);

    q = PROD (2.2, 3.4);

    printf("l = %d\nm = %d\ni = %d\nj = %d\np = %.2f\nq = %.2f",l,m,i,j,p,q);

    return 0;
}