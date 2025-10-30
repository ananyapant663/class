#include <stdio.h>
int main()
{
    FILE *fp;
    int count=0;

    fp=fopen ("C:\\Users\\panta\\OneDrive\\Desktop\\try.txt.txt", "r");
    if (fp==NULL)
    {
        printf("error file not here");
    }
    
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n' ){
            count++;
        }

        
        printf("%c", ch);

    }
   
    fclose(fp);
    printf("no of lines is %d",count);
    return 0;

}
