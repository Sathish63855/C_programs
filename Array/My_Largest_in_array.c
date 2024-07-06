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

    // // Print the array elements
    // printf("\nBefore Sorting : ");
    // for( i = 0; i < n; i++ ){
    //     printf("%d ", a[i]);
    // }        

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

    for( i = 0; i < n; i++){
        for( j = i+1; j < n; j++){
            if( a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for( i = 0, j = n-1; i < n/2; i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    // printf("Largest 1 :%d",a[0]);
    printf("\nLargest 2 :%d",a[1]);

}