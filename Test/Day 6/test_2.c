#include<stdio.h>

void merge_array(int arr1[], int arr2[], int arr3[], int n);

int main()
{
    // int arr3[100] = {0};
    // int  arr1[100], arr2[100];
    int i, j, n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr1[n], arr2[n],arr3[n+n];

    printf("\nEnter the elements of array 1 : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the elements of array 2 : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    merge_array(arr1,arr2,arr3,n);

}

void merge_array(int arr1[], int arr2[], int arr3[], int n)
{
    
    int i,j;

    for( i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    // i = n;
    // while( i < (n+n)-k1 )
    // {
    //     for( j = 0; j < n; j++)
    //     {
    //         arr3[i] = arr2[j];
    //         i++;   
    //     }
    // }

    for( j = 0; j < n; j++){
        arr3[j+n] = arr2[j];
    }

    for( i = 0; i < (n+n)-1; i++)
    {
        for( j = i+1; j < (n+n); j++)
        {
            if( arr3[i] > arr3[j] )
            {

                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }

    }

    printf("The merged array : ");
    for( i = 0; i < (n*2); i++)
    {
        printf("%d ", arr3[i]);
    }
}
