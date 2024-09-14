#include<stdio.h>

int main()
{
    int i, n, j, k;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for( i = 0; i < n; i++)
    {
        int num = 0;
        for(j = 0; j < n; j++)
        {
            if(j < n-i-1)
            {
                printf("  ");
            }
            else
            {
                printf("%4d", num+1);
            }
        }
        printf("\n");
    }
}
