#include<stdio.h>

void print_array(int *arr, int n)
{
    for(int  i = 0; i< n; i++)
    {
        printf("%d ", *(arr+i));
    }
}

void get_array(int *arr, int n)
{
    for(int  i = 0; i< n; i++)
    {   
        printf("Element %d : ", i+1);
        scanf("%d", arr+i);
    }    
}

void sum_of_pairs(int *arr, int n,int value)
{
    for( int i = 0; i < n-1; i++ )
    {
        for( int j = i+1; j < n; j++)
        {
            if( arr[i] + arr[j] == value)
            {
                printf("Pair of elments make the sum are %d and %d. ", arr[i], arr[j]);

                return;
            }
        }
    }
    printf("No pairs can make the given sum");
}



int main()
{
    int n, value;

    printf("Enter the number of elements : ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter the value : ");
    scanf("%d", &value);


    get_array(arr,n);
    printf("The elments : ");
    print_array(arr,n);
    sum_of_pairs(arr,n,value);

    return 0;

}