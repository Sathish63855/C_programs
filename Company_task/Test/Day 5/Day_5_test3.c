#include<stdio.h>

int main() 
{
    int arr[100];
    int value, pos;
    int i, j, n;

    printf("Enter the number of Elements : ");
    scanf("%d", &n);

    printf("Enter the Elements : \n");
    for( i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("The Elements : ");
    for( i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the position and value with space  : ");
    scanf("%d %d", &pos, &value);

    for( i = n-1; i >= pos-1; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos-1] = value;

    printf("The elements after insertion: ");
    for( i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
   
    return 0;

}