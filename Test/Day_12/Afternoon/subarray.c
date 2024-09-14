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

void sub_array(int *, int);


int main()
{
    int arr[size];
    int i, j, n ;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    get_array(arr, n);
    sub_array(arr, n);

    return 0;
}


void sub_array(int *a, int n)
{
    int i, j, k;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < n; k++)
            {
                if( a[k]+a[k+1] == 8 )
                {
                    printf("end\n");
                }
            }
        }
    }
}
