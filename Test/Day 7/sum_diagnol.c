#include<stdio.h>

void get_array( int rows, int cols, int a[rows][cols])
{ 
    int i,j;

    for( i = 0; i < rows; i++)
    {
        for( j = 0; j < cols; j++)
        {
            printf("Enter A[%d][%d] : ",i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void print_array(int rows, int cols, int a[rows][cols])
{ 
    int i,j;

    for( i = 0; i < rows; i++)
    {
        for( j = 0; j < cols; j++)
        {
            printf("% 4d", a[i][j]);
        }
        printf("\n");
    }
}

void sum_diagnols(int rows, int cols, int a[rows][cols])
{
    int i, j, sum_r = 0;
    int m = rows, sum_l = 0;

    for(i = 0; i < rows; i++)
    {
        m--;
        for(j = 0; j < cols; j++)
        {
            if( i == j)
            {
                sum_r += a[i][j];
            }
            if(j == m)
            {
                sum_l += a[i][j];
            }
        }
    }
    printf("The sum of right diagonal is %d. \n", sum_r);
    printf("The sum of left diagonal is %d. \n", sum_l);

}

int main()
{
    int rows, cols;

    printf("Enter the rows and cols : ");
    scanf("%d %d", &rows, &cols );

    int a[rows][cols];

    get_array(rows, cols, a);
    
    printf("The original Matrix : \n");
    print_array(rows, cols, a);

    sum_diagnols(rows, cols, a);

    return 0;
}