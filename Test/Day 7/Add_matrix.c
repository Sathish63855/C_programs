#include<stdio.h>

void get_array(int a[][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for( int j = 0; j < c; j++)
        {
            printf("Enter element [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void print_array(int a[][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for( int j = 0; j < c; j++)
        {
            printf("% 4d", a[i][j]);
        }
        printf("\n");
    }
}

void addition(int a[][10], int b[][10], int res[][10], int r1, int r2, int c1, int c2)
{
    int i, j;

    if ( r1 == r2 && c1 == c2)
    {
        for( i = 0; i < r1; i++)
        {
            for( j = 0; j < c1; j++)
            {
                res[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    printf("The Result : \n");
    print_array(res, r1, c1);
}


int main()
{

    int a[10][10], b[10][10], res[10][10];
    int r1, c1;
    int r2, c2;

    printf("Enter the number of row and column of first matrix : ");
    scanf("%d %d", &r1, &c1);

    get_array(a, r1, c1);

    printf("Enter the number of row and column of Second matrix : ");
    scanf("%d %d", &r2, &c2);

    get_array(b, r2, c2);

    printf("The matrix 1 : \n");
    print_array(a, r1, c1);

    printf("The matrix 2 : \n");
    print_array(b, r2, c2);

    addition(a, b, res, r1, r2, c1, c2);

    return 0;




}