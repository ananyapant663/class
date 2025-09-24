#include <stdio.h>
int main(){
    char str[100];
    int i, a=0,d=0,s=0;
    printf("enter the string");
    fgets(str,sizeof(str),stdin);

    for(i=0,str; str[i]!='\0';i++){
        if  ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            a++;
        }   
    

    else if (str[i]>='0' && str[i]<='9'){
        d++;

    }
    else if (str[i] != ' ' && str[i] != '\n') {
        s++;
    }

    }
    printf("Alphabets = %d\n", a);
    printf("Digits = %d\n", d);
    printf("Special characters = %d\n", s);
    return 0;
}
