#include <stdio.h>

int main() {
    FILE *ptr1, *ptr2;
    char ch;

    ptr1 = fopen("txt1.txt", "w");
    if (ptr1 == NULL) {
        printf("Error \n");
        return 0;
    }

    fprintf(ptr1, "This is the first file.\n");
    fclose(ptr1);

    ptr1 = fopen("txt1.txt", "r");
    if (ptr1 == NULL) {
        printf("Error \n");
        return 0;
    }

    ptr2 = fopen("txt2.txt", "w");
    if (ptr2 == NULL) {
        printf("Error \n");
        fclose(ptr1);
        return 0;
    }

    while ((ch = fgetc(ptr1)) != EOF) {
        fputc(ch, ptr2);
    }

    printf("File copied\n");

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}