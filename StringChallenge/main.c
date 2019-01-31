#include <stdio.h>
#include <stdlib.h>

enum boolean{true, false};

void concat();
int counter(char *word);
void stringcmp(char *word1, char *word2);

int main()
{

    concat();
    printf("Enter a word: ");
    char word1[50];
    char word2[50];
    scanf("%s",word1);
    printf("%d\n",counter(word1));
    printf("enter another word: ");
    scanf("%s",word2);
    printf("%s",word2);
    stringcmp(word1,word2);

    return 0;
}



void concat()
{
    char str1[100];
    char str2[100];
    char result[200];



    printf("enter a string: \n");
    scanf("%s",str1);
    printf("enter a second string: \n");
    scanf("%s",str2);
    char *pfirst = str1;
    char *psecond = str2;
    char *presult = result;

    while(*pfirst != '\0')
    {
        *presult = *pfirst;
        presult++;
        pfirst++;
    }
    while(*psecond != '\0')
    {
        *presult = *psecond;
        presult++;
        psecond++;
    }
    *presult = '\0';
    printf("%s\n",result);

}

int counter(char *word)
{
    char *pchar = word;


    int counter = 0;
    while(*pchar != '\0'){
        pchar = &word[counter];
        counter++;
    }
    return counter - 1;

}
void stringcmp(char *word1, char *word2)
{

    enum boolean isSame = true;
    char *pw1 = word1;
    char *pw2 = word2;
    while(*pw1 != '\0' || *pw2 != '\0')
    {
        if(*pw1 =! *pw2)
        {
            isSame = false;
            break;
        }
        pw1++;
        pw2++;
    }
    if(isSame == true)
    {
        printf("they are the same.");
    }
    else
    {
        printf("they are not the same.");
    }

}
