#include<stdio.h>

int main(){
    
    int arr[100],major;
    int i,j,n;

    printf("Enter the Number of Elements : ");
    scanf("%d",&n);

    for( i = 0; i < n; i++){
        printf("Enter A[%d] : ",i);
        scanf("%d", &arr[i]);
    }

    int mid = n/2;
    
    for( i = 0; i < n; i++){
        int count = 1;
        for( j = i+1; j < n; j++){
            if( arr[i] == arr[j] ){
                // arr[j] = 0;
                count++;
                if( count > mid){
                    major = arr[i];
                }
            }
        }
    }
    printf("Major Element  : %d",major);
    
}