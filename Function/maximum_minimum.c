#include<stdio.h>
#define max 10

void get_array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", a+i);
    }
}

void print_array(int *a, int n)
{
    printf("The Elements : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
}

int *maximum(int a[], int n)
{
    int i;
    static int result[2];
    result[0] = a[0];
    result[1] = a[0];

    for(i = 1; i < n; i++)
    {
        if(result[0] > a[i])
        {
            result[0] = a[i];
        }
        if(result[1] < a[i])
        {
            result[1] = a[i];
        }
    }
    return result;
}

int main()
{
    int arr[max];
    int i, n ,*p;
    
    printf("Enter the number of values :");
    scanf("%d", &n);
    
    get_array(arr,n);
    print_array(arr,n);


    p = maximum(arr,n);

    printf("\nThe Minimum Value : %d", *(p+0));
    printf("\nThe Maximum value : %d",*(p+1));

    return 0;
}