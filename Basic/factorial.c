#include<stdio.h>

int fact(int n){
    if(n == 1 || n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    (n < 0) ? printf("Enter number more than 0\n") : printf("The factorial of %d is %d\n",n,fact(n));
    
    return 0;
}