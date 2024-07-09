// C Program to illustrate the 3d array
#include <stdio.h>

int main()
{
    int i,j,k;
    // 3D array declaration
    int arr[2][2][2] = { 10, 20, 30, 40, 50, 60 ,70,80};
    int n = 2;
   
    // printing elements
    i = 0;
    while( i < n) {
        j = 0;
        while( j < n) {
            k = 0;
            while(k < n){
                printf("%d ", arr[i][j][k]);
                k++;
            }
            printf("\n");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
