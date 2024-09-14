#include<stdio.h>

int main()
{
    int n;

    int arr[10] = {1,2,3,4,5,6,7,8,9};

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n+i; j++)
        {
            if( j < n-i-1)
            {
                printf("  ");
            }
            else
            {   
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}