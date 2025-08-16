#include <stdio.h>

int main() {
    float a;
    float DA, HRA, IT, gross, net;

    printf("Enter basic salary: ");
    scanf("%f", &a);

    DA = 30.0 / 100.0 * a;
    HRA = 20.0 / 100.0 * a;
    IT = 6.0 / 100.0 * a;

    gross = a + DA + HRA + 7000;
    net = gross - IT - 4500;

    printf("Gross Salary = %.2f\n", gross);
    printf("Net Salary = %.2f\n", net);

    return 0;
}