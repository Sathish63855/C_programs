#include<stdio.h>
#include<stdlib.h>


void get_array( int **arr, int rows, int cols)
{
    

    for(int i = 0; i < rows; i++)
    {   
        for( int j = 0; j < cols; j++){
            printf("Enter  A[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }

    }

    // return arr;
    // printf("Elements entered : \n");
    // for(int i = 0; i < rows; i++)
    // {   
    //     for( int j = 0; j < cols; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf(" \n");
    // }

}

void display( int **arr, int rows, int cols)
{
    printf("Elements entered : \n");
    for(int i = 0; i < rows; i++)
    {   
        for( int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf(" \n");
    }
}

int main(){
    
    int rows,cols;
    int **arr = NULL;

    printf("Enter the number of rows and columns with space : ");
    scanf("%d %d", &rows, &cols);

    arr = (int **)malloc( rows * sizeof(int *));
    if( arr == NULL ){
        printf("Memory allocation failed !!!");
        return 1;
        // exit(1);
    }

    for( int i = 0; i < rows; i++){
        arr[i] = (int *)malloc( cols * sizeof(int));
        if( arr[i] == NULL ){
            printf("Memory allocation failed !!!");
            return 1;
            // exit(1);   
        }     
    }

    get_array(arr, rows,cols);
    display( arr,  rows,  cols);
    // print_array(arr,rows,cols);

    return 0;

}