#include <stdio.h>

// In a square matrix, if all the main diagonal elements are 1's and
// all the remaining elements are 0's, it is called an Identity Matrix.
int main() {
    int arr1[10][10];
    int r1, c1;
    int i, j, check = 1;
    printf("Input number of Rows for the matrix :");
    scanf("%d", &r1);
    printf("Input number of Columns for the matrix :");
    scanf("%d", &c1);
	
    printf("Input elements in the matrix :\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1 ;j++) {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            if ((i == j && arr1[i][j] != 1) || (i != j && arr1[i][j] != 0)) {
                check = 0;
                break;
            }
        }
        if (check == 0) {
            break;
        }
    }
    
    if(check == 1) {
        printf(" The matrix is an identity matrix.\n\n");
    } else {
        printf(" The matrix is not an identity matrix.\n\n");
    }
    return 0;
}
