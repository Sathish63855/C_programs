#include<stdio.h>
#include<stdlib.h>

int main(){
    int rows,cols;
    printf("enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&cols);


    int **array = malloc(rows*sizeof(int *));
    // for(int i=0;i<rows;i++){
    //     array[i] = malloc(cols*sizeof(int));
    // }
    printf("%d\n",array);
    printf("%d",array+3);
}