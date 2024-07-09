#include<stdio.h>

// int length(int arr[]){
//     int i,count=0;
//     for(i=0;arr[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     int arr[10] = {1,2,3,4,5};
//     int len = 0;
//     len = length(arr);
//     printf("Array Len : %d\n",len);
// }


int main(){
    int x[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            x[i][j] = i + j;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d",x[i][j]);
        }
    }
    
}