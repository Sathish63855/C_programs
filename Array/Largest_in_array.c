#include<stdio.h>
#include<limits.h>

int second_largest( int a[] ,int n);

int main(){
    
    int i,n,a[100];

    printf("Enter the number of Elements : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for( i = 0; i < n; i++){
        scanf("%d",a+i);
    }

    second_largest(a,n);

    return 0;
}

int second_largest(int a[],int n){
    
    int i,l1,l2;
    l1 = INT_MIN;
    l2 = INT_MIN;

    for( i = 0 ; i < n; i++ ){
        if( a[i] > l1 ){
            l2 = l1;
            l1 = a[i];
        }
        else if( a[i] > l2  && a[i] < l1){
            l2 =a[i];
        }
    }

    printf("The First Largest element is %d", l1);
    printf("\nThe second Largest element is %d", l2);
}