#include <stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("enter the sentence");
    fgets(str, sizeof(str), stdin);

    while (str[i] !='\0'){
        if (islower(str[i])){
            str[i]=toupper(str[i]);

        }

        else if (isupper(str[i])){
            str[i] = tolower(str[i]);

        }
        i++;
    }
    printf("new sentemce is %s",str);
    return 0;
}