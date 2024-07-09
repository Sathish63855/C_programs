// #include<stdio.h>

// int main(){
//     int arr1[10][10],arr2[10][10],arr3[10][10];
//     int i,j,n;

//     printf("Enter the Number of elements : ");
//     scanf("%d",&n);

//     printf("Enter the elements of Array 1 : \n");
//     for( i = 0; i < n; i++){    
//         for( j = 0; j < n; j++){
//             printf("Array 1[%d][%d] : ",i,j);
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     printf("Enter the elements of Array 2 : \n");
//     for( i = 0; i < n; i++){
//         for( j = 0; j < n; j++){
//             printf("Array 2[%d][%d] : ",i,j);
//             scanf("%d", &arr2[i][j]);
//         }
//     }

//     printf("\nThe Array 1 : ");
//     for( i = 0; i < n; i++){
//         for( j = 0; j < n; j++){
//             printf("%d ",arr1[i][j]);
//         }
//     }

//     printf("\nThe Array 2 : ");
//     for( i = 0; i < n; i++){
//         for( j = 0; j < n; j++){
//             printf("%d ",arr2[i][j]);
//         }
//     }

//     for( i = 0; i < n; i++){
//         for( j = 0; j < n; j++){
//             arr3[i][j] = (arr1[i][j] * arr2[i][j])+(arr1[i][j] * arr2[j][i]);
//         }
//     }

//     printf("\nThe resultant array : ");
//     for( i = 0; i < n; i++){
//         for( j = 0; j < n; j++){
//             printf("%d ",arr3[i][j]);
//         }
//     }

//     return 0;
// }


#include<stdio.h>

int main(){
    int i,j,k;
    int row1 = 2, col1 = 3, row2 = 3, col2 = 2;
    int arr1[10][10], arr2[10][10],arr3[10][10] ;

    printf("Enter the elements of Array 1 : \n");
    for( i = 0; i < row1; i++){
        for( j = 0 ; j < col1; j++){
            printf("A[%d][%d] : ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of Array 2 : \n");
    for( i = 0; i < row2; i++){
        for( j = 0 ; j < col2; j++){
            printf("A[%d][%d] : ",i,j);
            scanf("%d", &arr2[i][j]);
        }
    }


    for( i = 0; i < row1; i++){
        for( j = 0; j < col2 ; j++){
            arr3[i][j] = 0;
            for( k = 0; k < row2; k++){
                arr3[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    printf("The resultant array : \n");
    for( i = 0; i < row1; i++){
        for( j = 0 ; j < col2; j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }



}