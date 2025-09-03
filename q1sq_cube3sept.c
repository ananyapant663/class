#include <stdio.h>
int main()
{
    int i,start,end,sq,cube; 
    printf("Enter start of range:");
    scanf("%d",&start);
    printf("Enter end of range:");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        if(i%2==0)
        {
            sq=i*i;
            printf("Square of %d is %d\n",i,sq);
        }
        else
        {
            cube=i*i*i;
            printf("Cube of %d is %d\n",i,cube);
        }
    }
    return 0;
}

