#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[])
{
    char str[100];
    int i;

    printf("What is your name\n");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d", str, i);

    return 0;
}
