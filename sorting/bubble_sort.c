#include<stdio.h>

void bubblesort(int arr[], int n)
{
    int i, j, temp;
    for( i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void getArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d", arr+i);
    }
}

int main()
{
    int n;

    printf("Enter the number of elmenets : ");
    scanf("%d", &n);
    
    int arr[n];

    getArray(arr,n);

    printf("Unsorted Array : ");
    printArray(arr, n);

    bubblesort(arr,n);

    printf("\nSorted Array   : ");
    printArray(arr, n);
    printf("\n");

    return 0;
}