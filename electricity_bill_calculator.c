#include <stdio.h>

int main()
{
    int calls;
    float bill;

    printf("Enter total number of calls: ");
    scanf("%d", &calls);

    if ((calls > 0) && (calls <= 100))
    {
        printf("Free");
    }

    if ((calls > 100) && (calls <= 200))
    {
        calls = calls - 100;
        bill = calls * 1;
    }

    if ((calls >= 201) && (calls <= 300))
    {
        calls = calls - 200;
        bill = (calls * 2) + 100;
    }

    if ((calls >= 301) && (calls <= 400))
    {
        calls = calls - 300;
        bill = (calls * 4) + 300;
    }

    if (calls > 400)
    {
        calls = calls - 400;
        bill = (calls * 6) + 700;
    }

    if (calls > 100)
    {
        printf("Your total telephone bill is: ₹%f", bill);
    }

    return 0;
}