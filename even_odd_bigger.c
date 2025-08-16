#include <stdio.h>

int main() {
    int a, b;


    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);


    if (a > b) {
        if (a % 2 == 0)
            printf("The bigger number is %d and it is EVEN.\n", a);
        else
            printf("The bigger number is %d and it is ODD.\n", a);

        printf("Difference is: %d\n", a - b);
    }

    
    else if (b > a) {
        if (b % 2 == 0)
            printf("The bigger number is %d and it is EVEN.\n", b);
        else
            printf("The bigger number is %d and it is ODD.\n", b);

        printf("Difference is: %d\n", b - a);
    }


    else {
        printf("Both numbers are SAME: %d\n", a);
    }

    return 0;
}