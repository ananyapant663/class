#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, c;
    float discriminant, root1, root2;

    printf("Enter coefficient a: ");
    scanf("%d", &a);

    printf("Enter coefficient b: ");
    scanf("%d", &b);

    printf("Enter coefficient c: ");
    scanf("%d", &c);

    discriminant = b * b - 4 * a * c;

     if (discriminant>0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("roots are real and distinct");
        printf("root1=%.2f and root2=%.2f",root1,root2);
    }
    else if (discriminant==0)
    {
        root1= -b / (2*a);
        printf("roots are real and equal");
        printf("root1=root2=%.2f",root1);
    }
    else if (discriminant<0)
    {
        float real= -b/(2*a);
        float imgn= sqrt(-discriminant) / (2*a);
        printf("roots are imaginary");
        printf("real part=%.2f and imaginary part=%.2f",real,imgn);
    }
}