#include<stdio.h>


void getArray(int arr[],int n)
{
    for( int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
}

int max(int arr[], int n){

    int maxi =  arr[0];
    
    for(int i = 0; i < n; i++)
    {
        if( maxi < arr[i] )
        {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main(){
    
    int n;
    int arr[100];

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    getArray(arr, n);

    printf("\nMaximum :  %d ",max(arr,n));
}