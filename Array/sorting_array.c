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
5
    // Print the array elements
    printf("\nBefore Sorting : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }        

    // logic
    for( i = 0; i < n; i++){
        for( j = i+1; j < n; j++){
            if( a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print the array elements
    printf("\nAfter Sorting : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }

}