#include<stdio.h>

int main(){
    
    int i,n,pos,a[100];

    // Get n value
    printf("\nEnter the number of values : ");
    scanf("%d",&n);

    // Get elements
    printf("\nEnter the elements : \n");
    for( i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    printf("\nEnter the position to Delete : ");
    scanf("%d",&pos);


    printf("\nBefore Deletion : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }        

    for( i = pos-1; i < n-1; i++){
        a[i] = a[i+1];
    }


    printf("\nAfter Deletion : ");
    for( i = 0; i < n-1; i++ ){
        printf("%d ", a[i]);
    }

}