#include <stdio.h>
int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i=2; i<num; i++)
    {
        if (num% i == 0) 
        {
            printf("%d is not a prime number\n", num);
            break;
        }
    
        else
        {
            
        printf("%d is a prime number\n", num);
        }
    
    
    }
    return 0;
}
