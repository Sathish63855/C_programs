#include<stdio.h>


void mirror_pyramid(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            printf("  ");
        }
        for(int k = 0; k < (2*i)+1; k++)
        {
            printf("%d ",k+1);
        }
        printf("\n");
    }

    for(int i = n; i > 0; i--)
    {
        if( i != n)
        {   
            for(int j = 0; j < n-i; j++)
            {
                printf("  ");
            }
            for(int k = 0; k < (2*i)-1; k++)
            {
                printf("%d ", i+1);
            }
            printf("\n");
        }
    }
}

int main()
{
    int N;
    
    printf("Enter the number of rows : ");
    scanf("%d", &N);

    mirror_pyramid(N);

    return 0;
}