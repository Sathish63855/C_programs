#include<stdio.h>
#include<limits.h>

int second_smallest( int a[] ,int n);

int main(){
    
    int i,n,a[100];

    printf("Enter the number of Elements : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for( i = 0; i < n; i++){
        scanf("%d",a+i);
    }

    second_smallest(a,n);

    return 0;
}

int second_smallest(int a[],int n){
    
    int i,l1,l2;
    l1 = INT_MAX;
    l2 = INT_MAX;

    for( i = 0 ; i < n; i++ ){
        if( a[i] < l1 ){
            l2 = l1;
            l1 = a[i];
        }
        else if( a[i] < l2  && a[i] > l1){
            l2 =a[i];
        }
    }

    printf("The second smallest element is %d", l2);
}