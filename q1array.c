#include <stdio.h>

int main() {
    int i, num, cnt = 0;

    printf("Enter the number of values: ");
    scanf("%d", &num);

    int a[num];

    printf("Enter %d numbers:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);  
    }

    printf("The array in forward manner:\n");
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
        cnt++;
    }
    printf("\n");

    printf("The reverse of array is:\n");
    for (i = cnt - 1; i >= 0; i--) {  
        printf("%d ", a[i]);          
    }
    printf("\n");

    return 0;
}
