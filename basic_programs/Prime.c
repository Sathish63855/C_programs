#include<stdio.h>

int prime(int);

int main(){
    
    int N;

    printf("Enter the number : ");
    scanf("%d",&N);

    printf("The %d is %s number ",N,(prime(N))?("a prime"):("not a prime"));
   
    return 0;
}

int prime(int N){
    
    for(int i = 2; i <= N/2; i++ ){
        if( N%i == 0)
            return 0;
        else
            return 1;
    }
}