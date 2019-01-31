#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER33 33.55

int main(int args, char *argv[])
{
    char warren[] = {"Warren is the man"};
    //declare a constant string
    const char constantString[] = {"this is a constant!"};
//    int count = 0;
//    while(warren[count] != '\0'){
//        printf("%c\n",warren[count]);
//        count++;
//    }
//    printf("%d\n", count);
//    printf("The length of \"%s\" is %d\n", warren, count);
//    printf("%s\n", constantString);

    //size_t is unsigned integer
//    size_t warrenLength = strlen(warren);
//    printf("%d\n", warrenLength);
//
//    //copies strings
//    char firstCopy[50];
//    char secondCopy[50];
//    strcpy(firstCopy,"This is a String");
//    strcpy(secondCopy,"This is another String");
//    strcpy(secondCopy,firstCopy);
//    printf("%s\n", secondCopy);
//
//    //String cat
//    //strcat(secondCopy,firstCopy);
//    printf("%s\n", secondCopy);
//    int isEqual = strcasecmp(firstCopy,secondCopy);
//    printf("%d", isEqual);

    //find char
//    char firstCopy[50];
//    char secondCopy[50];
//    strcpy(firstCopy,"This is a String");
//    strcpy(secondCopy,"This is another String");

//    char letter = 'r';
//    char *ptr_find = NULL;
//    ptr_find = strchr(firstCopy,letter);
//    printf("%s",ptr_find);


    char firstCopy[50];
    char secondCopy[50];
    strcpy(firstCopy,"This is a String");
    strcpy(secondCopy,"This is another String");

    const char str[] = " ";
    char *token;

    //get first token
    token = strtok(firstCopy,str);

    //print out tokens
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL,str);
    }

    return 0;
}
