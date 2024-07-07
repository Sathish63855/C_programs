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
    printf("\nBefore Sorting : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }        

    // logic
    // for( i = 0; i < n; i++){
    //     if( a[i] > a[i+1]){
    //         temp = a[i];
    //         a[i] = a[i+1];
    //         a[i+1] = temp;
    //     }
    // }

    for( i = 0; i < n-1 ; i++){
            if( a[i] > a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
    }
    
    printf("\nAfter Sorting : ");
    for( i = 0 ; i < n; i++){
        printf("%d ", a[i]);
    }

    for( i = 0, j = n-1; i < n/2; i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
   
    printf("\nAfter Reversing : ");
    for( i = 0 ; i < n; i++){
        printf("%d ", a[i]);
    }

    // printf("Largest 1 :%d",a[0]);
    // printf("\nLargest 2 :%d",a[1]);

    for( i = 0; i < n; i++){
        printf("\nLargest %d : %d ",i+1,a[i]);
    }

    return 0;

}