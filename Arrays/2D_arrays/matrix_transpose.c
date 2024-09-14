#include<stdio.h>

void get_array(int rows, int cols, int a[rows][cols])
{
    int i, j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter A[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void print_array(int rows, int cols, int a[rows][cols])
{
    int i, j;
    for(i = 0; i < rows; i++){
            for(j = 0; j < cols; j++){
                printf("%d ",a[i][j]); 
            }
            printf("\n");
    }  
}

void transpose_matrix(int rows, int cols, int a[rows][cols])
{
    int b[cols][rows];
    int i, j;
    for(i = 0; i < cols; i++){
        for(j = 0; j < rows; j++){
            b[i][j] = a[j][i];
        }
    }  

    print_array(rows, cols, b );
}

int main(){

    int rows, cols;
    int i, j;

    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    printf("Enter The elements of Array :\n");
    get_array(rows, cols, a);

    printf("Before transpose : \n");
    print_array(rows, cols, a);

    printf("After transpose : \n");
    transpose_matrix(cols, rows, a);

}