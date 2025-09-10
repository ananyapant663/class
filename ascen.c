#include <stdio.h>
int main()
{
    int num, i,search,temp,j; 
    printf ("Enter the number of values: ");
    scanf("%d", &num);

    int a[num];
    for(i=0;i<num;i++)
    {
        scanf("%d", &a[i]);
    }
     for(i=0;i<5;i++) 
     {
        for( j =i+1;j<5;j++) 
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j] =temp;
            }
        }
    }
    printf("Numbers in Ascending order: ");
    for(i = 0; i<5; i++) {
        printf("%d ", a[i]);
    }
    return 0;   
}

