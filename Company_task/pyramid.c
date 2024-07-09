#include<stdio.h>

int main(){
    int i,j,n,d = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &n);


    for( i = 0; i < n; i++){
        d = 1;
        for( j = 0; j < n+i; j++){

            if( j < n-i-1){
                printf("  ");
            }
            else{
                printf("%d ",d++);
            }

        }
        printf("\n");
    }
}