#include <stdio.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);

    if (a >= 'A' && a <= 'Z') {
        a = a + 32;
        printf("New: %c\n", a);
    }
    else if (a >= 'a' && a <= 'z') {
        a = a - 32;
        printf("New: %c\n", a);
    }
    else {
        printf("Not an alphabet\n");
    }

    return 0;
}