#include <stdio.h>

int main() {
    int P, R, T;
    int SI;

    printf("Enter principal value: ");
    scanf("%d", &P);

    printf("Enter rate of interest: ");
    scanf("%d", &R);

    printf("Enter time period (in years): ");
    scanf("%d", &T);

    SI = (P * R * T) / 100;

    printf("Simple Interest is = %d\n", SI);

    return 0;
}