#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen ("C:\\Users\\panta\\OneDrive\\Desktop\\try.txt.txt", "r");
    if (fp==NULL)
    {
        printf("error file not here");
    }
    
    else if (fp!= NULL)
    {
        printf("the file exits");
    
    }

    fclose(fp);

}
