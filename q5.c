#include <stdio.h>

int main() {
    int n, i, sum=0, avg;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int number[n];

    printf("Enter %d numbers:\n", n);
    for(i=0;i<n;i++) 
    {
        scanf("%d", &number[i]);
        sum=sum+number[i];
        printf("sum is%d",sum);
    }

    avg = sum/n;

    printf("Average = %d\n", avg);

    return 0;
}

