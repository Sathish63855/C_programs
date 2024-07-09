#include<stdio.h>

int main(){
    int i,j,rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);

    for(i=0;i<rows;i++){
        int n =1 ;
    
        for(j=0;j<rows;j++){
            if(i == 0 || i == rows-1 || j == 0 || j == rows-1){
                printf("%d ",n++);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}