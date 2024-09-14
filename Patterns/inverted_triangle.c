#include<stdio.h>

int main(){
    int i,j,s,rows;
    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for(i = 0; i < rows; i++){
        for(s = 0; s < i+1; s++){
            printf("  ");
        }
        for(j = rows-i ; j > 0; j-- ){
            printf("%d ",j);
        }
        printf("\n");
    }
}