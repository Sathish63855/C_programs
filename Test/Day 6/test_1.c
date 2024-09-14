// count duplicate elements in array

#include<stdio.h>

int main()
{
    int arr[100];
    int i, j, n, c, sum;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for( i = 0; i < n; i++)
    {
        c = 0;
        for( j = 0; j < n; j++)
        {
            if( i != j)
            {
                if( arr[i] == arr[j])
                {
                   c++; 
                }
            }
        }
        if( c > 0)
        {  
            printf("%d", arr[i]);
        }
    }
    
    
    return 0;
}