#include<stdio.h>
void get_array(int rows, int cols, int a[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("Enter element A[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void print_array(int rows, int cols, int a[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("% 4d ", a[i][j]);
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
    printf("The sum is %d\n", sum);
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
    get_array(rows, cols, a);

    printf("The entered matrix : \n");
    print_array(rows, cols, a);

    sum_of_lower_tri(rows, cols, a);

    return 0;
}
