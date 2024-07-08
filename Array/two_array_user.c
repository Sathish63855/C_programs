#include<stdio.h>
#include<stdlib.h>

int main(){
    int rows,cols;
    printf("enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&cols);


    int **array = malloc(rows*sizeof(int *));
    for(int i=0;i<rows;i++){
        array[i] = malloc(cols*sizeof(int));
    }

    printf("Enter the elements of the array : \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Elements at [%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("The entered 2D array is : \n");
    for(int i=0;i<rows;i++){
        printf("\t");
        for(int j=0;j<cols;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<rows;i++){
        free(array[i]);
    }
    free(array);
    return 0;
    
}