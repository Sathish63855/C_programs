#include<stdio.h>

int main(){

    int arr1[10][10];
    int arr2[10][10];
    int rows, cols;
    int i,j;

    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &rows, &cols);

    printf("Enter The elements of Array 1 :\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter A[%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }    

    printf("Enter The elements of Array 2 :\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter A[%d][%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }  

    printf("The Matrix before addition :\n");
    printf("Array 1 :\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    } 

    printf("Array 2 :\n\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    } 


    printf("The Matrix After addition :\n\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", arr1[i][j]+ arr2[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}