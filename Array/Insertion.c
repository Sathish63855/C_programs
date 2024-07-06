#include<stdio.h>

int main(){
    
    int i,n,pos,value,a[100];

    // Get n value
    printf("\nEnter the number of values : ");
    scanf("%d",&n);

    // Get elements
    printf("\nEnter the elements : \n");
    for( i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }
    
    // get Position
    printf("\nEnter the position to Insert : ");
    scanf("%d",&pos);

    // Get Value to insert
    printf("\nEnter the Value to Insert : ");
    scanf("%d",&value);

    // Print the array elements
    printf("\nBefore Insertion : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }        

    // logic
    for( i = n-1; i >= pos-1; i--){
        a[i+1] = a[i];
    }

    a[pos-1] = value;
 
    // Print the array elements
    printf("\nAfter Insertion : ");
    for( i = 0; i <= n; i++ ){
        printf("%d ", a[i]);
    }

}