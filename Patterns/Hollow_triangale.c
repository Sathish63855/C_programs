#include<stdio.h>

int main()
{

    int rows;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int n = rows;

    for(int i = 0; i < n; i++ )
    {
        for(int j = 0; j < n*2-1; j++)
        {
            if( i == 0 || i == j || i == n*2-i-2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}