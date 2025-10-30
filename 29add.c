#include <stdio.h>
int main(){
    int num1,num2,sum;
    int *p1, *p2;

    printf("enter first no");
    scanf("%d",&num1);

    printf("enter 2nd no");
    scanf("%d",&num2);

    p1= &num1;
    p2 =&num2;
    sum= *p1 + *p2;
    printf("the sum is %d",sum);

    return 0;


}