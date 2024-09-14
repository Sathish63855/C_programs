#include<stdio.h>

void print_array(int *arr, int n)
{
    for( int i = 0; i < n; i++)
    { 
        printf("%d ", arr[i]);
    }
}

void get_array(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
}


// Logic for left shift
void left_rotate(int arr[], int n)
{
    int k, i = 0, j;

    printf("Enter the number of shift : ");
    scanf("%d", &k);

    while( i < k)
    {
        int first = arr[0];

        for( j = 0; j < n; j++)
        {
            arr[j] = arr[j+1]; 
        }

        arr[n-1] = first;

        i++;
    }

    printf("After left shift : ");
    print_array(arr,n);
}

int main()
{
    int n;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n];

    get_array(arr,n);
    left_rotate(arr,n);

    return 0;
}