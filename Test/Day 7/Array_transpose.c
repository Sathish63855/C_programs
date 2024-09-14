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
            printf("    %d", a[i][j]);
        }
        printf("\n");
    }
}

void transpose(int rows, int cols, int a[rows][cols], int res[cols][rows])
{
    int i, j;

        for( i = 0; i < cols; i++)
        {
            for( j = 0; j < rows; j++)
            {
                res[i][j] = a[j][i];
            }
        }
        printf("The Matrix after Transpose : \n");
        print_array(cols,rows,res);
}

int main()
{
    int rows, cols;

    printf("Enter the rows and cols : ");
    scanf("%d %d", &rows, &cols );

    int a[rows][cols];
    int res[rows][cols];

    get_array(rows, cols, a);
    
    printf("The original Matrix : \n");
    print_array(rows, cols, a);
    transpose( rows, cols,  a, res);

    return 0;
}