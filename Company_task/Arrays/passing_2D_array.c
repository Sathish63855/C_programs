#include<stdio.h>

void get_array( int arr[][100], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {   
        for( int j = 0; j < cols; j++){
            printf("Enter  A[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }

    }

}

void print_array( int arr[][100], int rows, int cols)
{
    printf("Elements entered : \n");
    for(int i = 0; i < rows; i++)
    {   
        for( int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf(" \n");
    }
}

int main(){
    int arr[100][100];
    int rows,cols;

    printf("Enter the number of rows and columns with space : ");
    scanf("%d %d", &rows, &cols);

    get_array(arr,rows,cols);

    print_array(arr,rows,cols);

    return 0;

}