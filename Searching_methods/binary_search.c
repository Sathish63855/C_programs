#include<stdio.h>

void get_array(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter A[%d] : ", i);
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

void binary_search(int *a, int n, int value)
{
    int f, l, m, flag = 0;
    
    f = 0;
    l = n-1;

    while(f <= 1)
    {
        m = (f+l)/2;
        if( value == a[m])
        {
            flag = 1;
            break;
        }
        else if( value < a[m])
        {
            l = m-1;
        }
        else
        {
            f = m+1;
        }
    }

    if( flag == 0)
    {
        printf("\n%d value not found \n", value);
    }
    else
    {
        printf("\n%d value found at %d position\n", value, m);
    }

}

int main()
{
    int n,value;
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int a[100];

    printf("Enter the vlaue to search : ");
    scanf("%d", &value);

    printf("Enter the elements : \n");
    get_array(a,n);

    printf("The Elements : ");
    print_array(a,n);

    binary_search(a,n,value);

    return 0;
}