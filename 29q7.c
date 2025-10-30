#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int words = 0, chars = 0, inword = 0;

    fp = fopen("C:\\Users\\panta\\OneDrive\\Desktop\\try.txt.txt", "r");
    if (fp == NULL)
    {
        printf("error file not here");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        chars++; 

        if (isspace(ch))
        {
            inword = 0; 
        }
        else if (inword == 0)
        {
            inword = 1;
            words++; 
        }
    }

    fclose(fp);

    printf("Number of characters: %d\n", chars);
    printf("Number of words: %d\n", words);

    return 0;
}
