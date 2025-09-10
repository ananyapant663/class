# include <stdio.h>
int main() 
{int i, j, num, count;
    printf(" enter the no of values");
    scanf("%d", &num);
    int a[num];

    printf("Enter %d numbers:\n", num);
    for (i = 0; i < num; i++) 
    {
        scanf("%d", &a[i]);

    }
    
    printf("Unique elements in the array are:\n");

    for (i=0; i<num; i++) {
        count = 0;
        for (j=0; j<num; j++) {
            if (a[i]==a[j]) {
                count=count+1;
            }
        }
        if (count==1) {
            printf("%d ", a[i]);
        }
    }


}