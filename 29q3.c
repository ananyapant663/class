#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen ("C:\\Users\\panta\\OneDrive\\Desktop\\try.txt.txt", "r");
    if (fp==NULL)
    {
        printf("error file not here");
    }
    
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        
        printf("%c", ch);

    }
   
     

    fclose(fp);

}
