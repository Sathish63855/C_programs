#include<stdio.h>
#include<stdlib.h>

int main(){
    int tables,rows,cols,i,j,k;
    int ***array;

    printf("Enter the number of tables and rows and columns with space : ");
    scanf("%d %d %d",&tables, &rows, &cols);

    array = (int ***)malloc(tables * sizeof(int **));
    if(array == NULL){
        printf("Memory allocation is Failed !!!");
        return 1;
    }

    for( i = 0; i < tables; i++){
        array[i] = (int **)malloc(rows * sizeof(int *));
        if(array[i] == NULL){
            printf("Memory allocation is Failed !!!");
            return 1;
        }
        for( j = 0; j < rows; j++){
            array[i][j] = (int *)malloc(cols * sizeof(int));
            if(array[i][j] == NULL){
                printf("Memory allocation is Failed !!!");
                return 1;
            }
        }
    }

    printf("Enter the elements : \n");
    for(i = 0; i < tables; i++){
        for( j = 0; j < rows; j++){
            for( k = 0; k < cols; k++){
            printf("A[%d][%d][%d] : ", i, j, k);
            scanf("%d",&array[i][j][k]);
            }
        }
    }

    printf("The Elements are : \n");
    for(i = 0; i < tables; i++){
        printf("Table  %d : \n",i+1);
        for( j = 0; j < rows; j++){
            printf("Row %d : \n",j+1);
            for( k = 0; k < cols; k++){
                printf("Column %d : %d \n",k+1 ,array[i][j][k]);
            }
        }
    }

    // printf("The size of array is %d",sizeof(array));
    printf("The size of array is %d",sizeof(array[0]));

    // Free allocated memory 
    for( i = 0; i < tables; i++){
        for( j = 0; j < rows; j++){
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);

}