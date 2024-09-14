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

void change_diagnols(int rows, int cols, int a[rows][cols])
{
    int new[rows][cols];

    int num = cols;
    int temcol;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if( i == j)
            {
                temcol = a[i][j];
                a[i][j] = a[i][num-i];
                a[i][num-i] = temcol;
            }           
        }
    }
}

int main()
{
    int rows, cols;
    int a[10][10];

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of cols : ");
    scanf("%d", &cols);

    printf("Enter the elements : \n");
    get_array(a, rows, cols);

    printf("The entered matrix : \n");
    print_array(a, rows, cols);

    change_diagnols(rows, cols, a);
    printf("The matrix After diagnols change : \n");
    print_array(a, rows, cols);

    return 0;
}
