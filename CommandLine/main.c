#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[])
{
    int numberOfArgs = argc;
    char *argument1 = args[0];
    char *argument2 = args[1];

    printf("%d\n", numberOfArgs);
    printf("argument 1: %s\n", argument1);
    printf("argument 2: %s\n", argument2);
    return 0;
}
