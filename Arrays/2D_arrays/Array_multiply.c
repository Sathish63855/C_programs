
#include<stdio.h>

void get_array(int (*a)[10], int r, int c)
{
    int i, j;

    for( i = 0; i < r; i++){
        for( j = 0 ; j < c; j++){
            printf("A[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}

void print_array(int (*a)[10], int r, int c)
{
    int i, j;

    for( i = 0; i < r; i++){
        for( j = 0 ; j < c; j++){
            printf("%d", a[i][j]);
        }
    }
}

void array_multiple(int (*a3)[10], int (*a2)[10], int (*a1)[10], int r, int c)
{
    int i, j, k;
    for( i = 0; i < r; i++){
        for( j = 0; j < c ; j++){
            a3[i][j] = 0;
            for( k = 0; k < r; k++){
                a3[i][j] += (a1[i][k] * a2[k][j]);
            }
        }
    }
}

int main(){
    int i,j,k;
    int row1 = 2, col1 = 3, row2 = 3, col2 = 2;
    int arr1[10][10], arr2[10][10],arr3[10][10] ;

    printf("Enter the elements of Array 1 : \n");
    get_array(arr1, row1, col1);

    printf("Enter the elements of Array 2 : \n");
    get_array(arr2, row2, col2);

    array_multiple(arr3, arr2, arr1, col2, row2);

    printf("The resultant array : \n");
    print_array(arr3, row2, col1);

    return 0;
}