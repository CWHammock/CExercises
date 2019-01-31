#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstSentence[100];
    char secondSentence[100];

    printf("Enter the first sentence: \n");
    scanf("%s", firstSentence);
    printf("Enter the second sentence: \n");
    scanf("%s", secondSentence);
    printf("%s\n",firstSentence);
    printf("%s\n",secondSentence);

    for(int i = 0;(firstSentence[i] = (char)toupper(firstSentence[i])) != '\0';i++);
    for(int i = 0;(secondSentence[i] = (char)toupper(secondSentence[i])) != '\0';i++);

    printf("The second string %s found in the first.\n",((strstr(firstSentence,secondSentence) == NULL)? " was not" : " was "));
    return 0;
}
