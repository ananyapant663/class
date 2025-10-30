#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char word[100], maxword[100];
    int maxlen = 0;

    fp = fopen("C:\\Users\\panta\\OneDrive\\Desktop\\try.txt.txt", "r");
    if (fp == NULL)
    {
        printf("error file not here");
        return 1;
    }

    while (fscanf(fp, "%s", word) != EOF)
    {
        int len = strlen(word);
        if (len > maxlen)
        {
            maxlen = len;
            strcpy(maxword, word);
        }
    }

    fclose(fp);

    printf("The word with maximum length is: %s\n", maxword);
    printf("Length of that word: %d\n", maxlen);

    return 0;
}
