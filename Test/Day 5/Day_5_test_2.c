#include<stdio.h>

int main(){
    
    int arr[100];
    int n,i,j,temp;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the Elements : ");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Sort the array
    for( i = 0; i < n; i++){
        for( j = i+1; j < n; j++){  
            if( arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }   
        }
    }

    printf("The elements of sorted array : ");
    for( i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    printf("\nThe First smallest element is %d ",arr[0]);
    printf("\nThe First largest element is %d ",arr[n-1] );
    printf("\nThe second smallest element is %d ",arr[1]);
    printf("\nThe second largest element is %d ",arr[n-2] );

    

}