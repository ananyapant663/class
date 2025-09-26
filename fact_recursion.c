#include <stdio.h>
int main(){
    int num;
    int factorial(int num);
    printf("enter a number");
    scanf("%d",&num);

    printf("factorial of %d is %d ", num,factorial(num));
    return 0;

}

int factorial(int n){
    int ans=1;
    if (n>1){ 
        ans=n*factorial(n-1);

    }
    return ans;
    }
    

