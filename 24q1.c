#include <stdio.h>
int main(){
    char str[100];
    int i,word=0;
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    for(i=0,str; str[i]!='\0';i++) {
        if (str[i]==' '){
            word++;
        }
    }
    printf("total words are %d",word);
    return 0;


}