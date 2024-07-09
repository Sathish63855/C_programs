#include<stdio.h>

int *get_array_n(int n)
{   
    int arr[50];
    for( int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}

void print_array( int arr[], int n )
{   
    for( int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

}

int main()
{
    
    int *arr,n = 5;

    arr = get_array_n(n);

    print_array(arr,n);

    return 0;
}