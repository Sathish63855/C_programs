#include<stdio.h>

void get_array(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", arr+i);
    }
}

void search(int arr[], int n, int value)
{
    int check = 0,index;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            check = 1;
            index = i;
            break;
        }
    }

    (check > 0) ? printf("Yes %d is found at %d \n", value, index) : printf("Not found\n");
}

int main()
{
    int n,value;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the value to search : ");
    scanf("%d",&value);

    int arr[n];

    get_array(arr,n);
    search(arr,n,value);

    return 0;
}