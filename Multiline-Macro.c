#include <stdio.h>

#define LOG_DEBUG(message) \
printf("[DEBUG] %s:%d %s\n", __FILE__, __LINE__, message); \
printf("Execution time: %s\n", __TIME__);

int main()
{
    LOG_DEBUG("Starting the program");
    // Program logic
    LOG_DEBUG("Ending the program");
    return 0;
}