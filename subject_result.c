#include <stdio.h>

int main() 
{
    int sub1, sub2, sub3, sub4, sub5;
    int percent;

    
    printf("Enter marks of sub1: ");
    scanf("%d", &sub1);

    printf("Enter marks of sub2: ");
    scanf("%d",&sub2);

    printf("Enter marks of sub3: ");
    scanf("%d",&sub3);

    printf("Enter marks of sub4: ");
    scanf("%d",&sub4);

    printf("Enter marks of sub5: ");
    scanf("%d",&sub5);

    
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("print total=%d",total);
    percent = (total /5);
    printf("print percentage=%d",percent);

   
    if (percent > 85)
    {
        printf("Grade: O\n");
    } 
    else if (percent > 75) 
    {
        printf("Grade: A\n");
    } 
    else if (percent > 60)
    {
        printf("Grade: B\n");
    } 
    else if (percent > 40) 
    {
        printf("Grade: C\n");
    } 
    else if (percent > 35) 
    {
        printf("Grade: D\n");
    } 
    else {
        printf("Grade: F \n");
    }

    return 0;
}