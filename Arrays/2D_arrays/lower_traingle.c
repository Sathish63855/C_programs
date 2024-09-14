#include<stdio.h>

int main(){
    int a[10][10];
    int i, j, n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("% 4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for( i = 0; i < n; i++)
    {
        for( j = 0; j < n; j++)
        {
            if ( i < j)
            {
                printf("% 4d", 0 );
            }
            else
            {
                printf("% 4d",a[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
