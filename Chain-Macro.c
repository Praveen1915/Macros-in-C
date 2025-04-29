#include <stdio.h>

#define BASE_URL "https://google.com"
#define ENDPOINT "/c-programming"
#define FULL_URL BASE_URL ENDPOINT

int main()
{
    printf("Requesting data from: %s\n", FULL_URL);
    return 0;
}