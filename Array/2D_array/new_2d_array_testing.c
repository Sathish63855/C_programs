#include<stdio.h>
#include<stdlib.h>

int main(){
    int rows,cols,i,j;
    int **array;

    printf("Enter the number of rows and columns with space : ");
    scanf("%d %d",&rows, &cols);

    array = (int **)malloc(rows * sizeof(int *));
    if(array == NULL){
        printf("Memory allocation is Failed !!!");
        return 1;
    }

    for( i = 0; i < rows; i++){
        array[i] = (int *)malloc(cols * sizeof(int));
        if(array[i] == NULL){
            printf("Memory allocation is Failed !!!");
            return 1;
        }
    }

    printf("Enter the elements : \n");
    for(i = 0; i < rows; i++){
        for( j = 0; j < cols; j++){
            printf("A[%d][%d] : ", i, j);
            scanf("%d",&array[i][j]);
        }
    }

    printf("The elements are : \n");
    for( i = 0; i < rows; i++){
        printf("Row %d : \n",i+1);
        for(j = 0; j < cols; j++){
        printf("Column %d : %d \n",j+1 ,array[i][j]);
        }
    }

    printf("The size of array is %d",sizeof(array));
    // Free allocated memory 
    for( i = 0; i < rows; i++){
        free(array[i]);
    }
    free(array);

    printf("The size of array is %d",sizeof(array));
}