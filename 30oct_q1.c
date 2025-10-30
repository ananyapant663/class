#include <stdio.h>
int main(){
    FILE *fp;
    int count =0;
    fp=fopen ("C:\\Users\\panta\\OneDrive\\Desktop\\try.txt.txt", "r");
    count=1;
    if (fp==NULL){
        printf("error");
        return 0;
    }

    fscanf(fp, "%d" ,&count);
    count = count+1;
    printf(" This is execution no %d",count);
    fclose(fp);
    return 0;

}