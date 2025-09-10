#include <stdio.h>
int main()
{
    int num, i,search,j; 
    printf ("Enter the number of values: ");
    scanf("%d", &num);

    int a[num];
    for(j=0;j<num;j++)
    {
        scanf("%d", &a[j]);
    }
    printf("enter the element to search");
    scanf("%d",&search);
    for(i=0;i<num;i++)
    {
        if(a[i]==search)
        {
            printf("the item is %d",a[i]);
        }

    }
    return 0;

}