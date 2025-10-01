#include <stdio.h>
void second(int arr[], int n){
    int a,b,i;
    if (arr[0]>arr[1]){
        a=arr[0];
        b=arr[1];
    }
    else{
        a=arr[1];
        b=arr[0];

    }
    for(i=2 ; i <n;i++){
        if(arr[i]>a){
            b=a;
            a=arr[i];

        }
        else if(arr[i]>b){
            b=arr[i];
        }
    }
    printf("second largest is %d",b);

}
int main(){
    int n , arr[100],i;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    second(arr,n);
    return 0;

}
