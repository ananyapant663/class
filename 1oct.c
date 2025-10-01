#include <stdio.h>
int main(){
    char str1[100], str2[100];
    int i,j,len1=0,len2=0,same;
    printf("enter the string 1");
    scanf("%s",str1);

    printf("enter string 2 ");
    scanf("%s",str2);
    for(i=0; str1[i]!='\0';i++){
        len1++;
    }
     for(i=0; str2[i]!='\0';i++){
        len2++;
    }
    if(len1!=len2){
        printf("no anagram");
    }



    for(i=0;i<len1;i++){
        same=0;
        for(j=0;j<len2;j++){
            if (str1[i]== str2[j] ){
                same=1;
                break;
            }
        }

        if(same==0){
            printf("no anangram\n");

        }
    }
    printf("they are anagram");
    return 0;

}