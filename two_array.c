#include<stdio.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    int rows = sizeof(a)/sizeof(a[0]);
    int cols = sizeof(a[0])/sizeof(a[0][0]);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}