// 

#include<stdio.h>

int main() 
{
    int arr[100],element[100] = {0};
    int i, j, n;
    int count;

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

    printf("\n");

    for( i = 0; i < n-1; i++)
    {
        count = 1;
        for( j = i+1; j < n; j++ )
        {
            if( arr[i] == arr[j] )
            {
                count++;
            }
        
        }
        if (element[arr[i]] == 0)
            element[arr[i]] = count;
    }


    for(i = 0; i < n; i++)
    {
        if(element[arr[i]] > 0)
        {
            printf("%d : %d \n", arr[i], element[arr[i]]);
            element[arr[i]] = 0;
        }
    }



    return 0;

}