#include <stdio.h>
int main()
{
    char str[100];
    int i=0,len;
    int pal=1;
    printf("enter the sentence");
    fgets(str, sizeof(str), stdin);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len-1-i]) {
            int pal=0;
            printf("Not Palindrome\n");
            break;
        }
    }

    if (i==len/2)
        printf("palindeome\n");

    return 0;
    
        
}