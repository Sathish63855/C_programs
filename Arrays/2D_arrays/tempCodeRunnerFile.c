#include<stdio.h>

int main(){

    int arr1[10][10];
    int arr2[10][10];
    int rows, cols;
    int i, j;

    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &rows, &cols);

    // if(rows == cols){
        printf("Enter The elements of Array :\n");
        for(i = 0; i < rows; i++){
            for(j = 0; j < cols; j++){
                printf("Enter A[%d][%d] : ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Before transpose : \n");
        for(i = 0; i < rows; i++){
            for(j = 0; j < cols; j++){
                printf("%d ",arr1[i][j]); 
            }
            printf("\n");
        }  
    
        printf("After transpose : \n");
        for(i = 0; i < cols; i++){
            for(j = 0; j < rows; j++){
                printf("%d " ,arr1[j][i]);
            }
            printf("\n");
        }  

}