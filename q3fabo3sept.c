#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(c<n)
    {
    c=a+b;
    a=b;
    b=c;
    }

    if(c==n)
    printf("%d is in the Fibonacci series.\n",n);
    else
    printf("%d is not in the Fibonacci series.\n",n);
    return 0;

}
