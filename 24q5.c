#include <stdio.h>
int main(){
    char str[100];
    int i=0,s=0,len=0,maxl=0,maxin=0,wlen;
    printf("enter the sentence");
    fgets(str, sizeof(str), stdin);

    while (str[len] !='\0'){
        len++;
    }

    while(i<=len){
        if (str[i]==' ' || str[i]=='\0'){
            wlen=i-s;
            if (wlen>maxl)
            {
                maxl=wlen;
                maxin=s;
            }
            s=i+1;
        }
        i++;
    }
    printf("lomgest words\n");
    i=maxin;
    while(str[i] != ' ' && str[i]!='\0'){
        printf("%c",str[i]);
        i++;

    }
    
    return 0;

}