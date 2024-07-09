#include<stdio.h>

void print_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sort(int arr[],int n)
{
    for( int i =0; i < n; i++)
    {
        for( int j = i; j < n; j++){

            if( arr[i] > arr[j])
            {
                int temp;
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

}
void insert_at_index(int arr[], int n, int value)
{
    int pos = -1;kf

    for( int i = 0; i < n; i++)
    {
        if( arr[i] <= value && value < arr[i+1])
        {
            pos = i+1;
        }
    }

    if( pos == -1)
    {
        arr[n] = value;
    }

    else
    {
        for(int  i = n; i > pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = value;
    }

    printf("\nThe elements after insertion : ");
    print_array(arr,n+1);
    
}

int main()
{
    int arr[100] = {0};
    int i, j, n, value;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("\nEnter the Value : ");
    scanf("%d", &value);

    printf("\nEnter the elements :\n");
    for( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr,n);
    print_array(arr,n);
    insert_at_index(arr, n, value);


    return 0;

}