#include <stdio.h>

int main()
{
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("Compilation Date: %s\n", __DATE__);
    printf("Compilation Time: %s\n", __TIME__);

    #ifdef __GNUC__
    printf("Using GCC compiler.\n");
    #endif

    #ifdef __linux__
    printf("Running on Linux.\n");
    #endif

    #ifdef _WIN32
    printf("Running on Windows.\n");
    #endif

    #ifdef NDEBUG
    printf("Optimization is enabled.\n");
    #else
    printf("Debugging is enabled.\n");
    #endif

    return 0;
}