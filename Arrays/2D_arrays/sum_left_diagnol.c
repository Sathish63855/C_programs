#include <stdio.h>

int main() {
    int i, j, arr1[50][50], sum = 0, n, m = 0;

    printf("Input the size : ");
    scanf("%d", &n);

    m = n;


    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("The matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("% 4d", arr1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        m = m - 1; 
        for (j = 0; j < n; j++) {
            if (j == m) {
                sum = sum + arr1[i][j];
            }
        }
    }

    printf("Addition of the left Diagonal elements is : %d\n", sum);

    return 0;
}
