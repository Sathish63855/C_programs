#include<stdio.h>

void get_array(int a[][10], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void print_array(int a[][10], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void sum_of_lower_tri(int rows, int cols, int a[rows][cols])
{
    int m = rows;
    int new[rows][cols];
    int sum = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < i; j++)
        {
            sum += a[i][j];
        }
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of cols : ");
    scanf("%d", &cols);
    
    int a[rows][cols];

    printf("Enter the elements : \n");
    get_array(a, rows, cols);

    printf("The entered matrix : \n");
    print_array(a, rows, cols);

    sum_of_lower_tri(a, rows, cols);;

    return 0;
}
