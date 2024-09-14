#include<stdio.h>

void get_array(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", a+i);
    }
}

void print_array(int a[], int n)
{
    printf("The array elements : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
}

int largest(int a[], int n)
{
    int maxi = a[0];

    for(int i = 0; i < n; i++)
    {
        if(a[i] > maxi)
        {
            maxi = a[i];
        }
    }

    return maxi;

}

int main()
{
    int n, max;

    printf("Enter the number of elments : ");
    scanf("%d", &n);
    
    int a[n];

    get_array(a, n);
    print_array(a,n);

    max = largest(a, n);
    printf("\nThe largest element in th earray is %d.\n",max);

    return 0;
}