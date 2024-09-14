#include<stdio.h>

int main(){
    int arr[3][3],rows,cols,i,j;
    rows = sizeof(arr)/sizeof(arr[0]);
    cols = sizeof(arr[0])/sizeof(arr[0][0]);
    // printf("%d",rows);
    // printf("%d",cols);
    // printf("Enter the rows and column with space : ");
    // scanf("%d %d",&rows,&cols);

    printf("Enter the elements of the array : \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("The Elements of the array : \n");
    for(i=0;i<rows;i++){
        printf("\t");
        for(j=0;j<cols;j++){
                printf("%d ",arr[i][j]);    
        }printf("\n");
    }
    printf("The left diagonal : ");
    for(i=0;i<rows;i++){
        for(j=0;j<=cols;j++){
            if(i==j){
                printf("%d ",arr[i][j]);
            }    
        }
    }
    printf("\nThe Right diagonal : ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if((i+j)==(cols-1)){
                printf("%d ",arr[i][j]);
            }    
        }
    }

    printf("\nThe Enter elements are : \n");
    // for(i=0;i<rows;i++){
    //     for(j=0;j<cols;j++){
    //         if((i==1 && j==0)||(i==2 && j==0)||(i==2 && j==1)){
    //             arr[i][j] = 0;
    //         }
    //         printf("%d ",arr[i][j]);             
    //     }
    //     printf("\n");
    // }

    for(i=0;i<rows;i++){
        for(j=0;j<i;j++){
            arr[i][j]=0;
        }
    }

    for(i=0;i<rows;i++){
        printf("\t");
        for(j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
