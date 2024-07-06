#include<stdio.h>

int main(){
    
    int i,j,n,temp,a[100];

    // Get n value
    printf("\nEnter the number of values : ");
    scanf("%d",&n);

    // Get elements
    printf("\nEnter the elements : \n");
    for( i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    printf("\nBefore : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }        

    printf("\nAfter : ");
    for( i = n-1; i >= 0; i-- ){
        printf("%d ", a[i]);
    }

}