#include<stdio.h>
#include<stdlib.h>

void getArray(int arr[], int n)
{
    for( int i = 0; i < n; i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d", &arr[i]);
    }   
}

void printArray(int arr[], int n)
{
    for( int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sum_closer_to_zero(int arr[], int n)
{
    int sum, minsum, minpair1, minpair2;
    int i, j;

    if( arr == NULL || n < 2)
    {
        return;
    }

    minpair1 =  arr[0];
    minpair2 = arr[1];
    minsum = minpair1 + minpair2 ;

    for( i = 0; i < n-1; i++)
    {
        for( j = i+1; j < n; j++)
        {
            sum = (arr[i]+arr[j]);

            if ( abs(sum) < abs(minsum))
            {
                minsum = sum;
                minpair1 = arr[i];
                minpair2 = arr[j];
            }
        }
    }
    printf("\nThe sum of %d and %d is nearest to Zero ", minpair1, minpair2);
    

}

int main()
{
    int n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[n];

    getArray(arr,n);
    printArray(arr,n);
    sum_closer_to_zero(arr, n);

    return 0;
}