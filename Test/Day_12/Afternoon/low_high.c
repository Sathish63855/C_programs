#include<stdio.h>
#define size 10

void get_array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", a+i);
    }
}

void print_array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
}

void low_high(int *a, int n);

int main()
{
    int arr[size], n ;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    get_array(arr, n);
    low_high(arr,n);

    return 0;
}

void low_high(int *a, int n)
{
    int i, j, tem;

    for(i = 0, j = 1;i < n; i += 2, j += 2)
    {
            if( a[i] > a[i+1] )
            {
                tem = a[i];
                a[i] = a[i+1];
                a[i+1] = tem;        
            }

            if(a[j] < a[j+1])
            {
                tem = a[j+1];
                a[j+1] = a[j+2];
                a[j+2] = tem;
            }
    }

    print_array(a,n);
}


