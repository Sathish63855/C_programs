#include<stdio.h>
#include<limits.h>

void largest_2(int a[],int n);

int main(){
    
    int a[100],i,n;

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("\nEnter the elements : \n");
    for( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    largest_2(a,n);

    return 0;
}


void largest_2(int a[],int n){
    
    int i, l1, l2;
    l1 = INT_MIN;
    l2 = INT_MIN;

    for( i = 0; i < n; i++){
        if( a[i] > l1){
            l2  = l1;
            l1 = a[i];
        }
        else if( a[i] > l2 && a[i] < l1){
            l2 = a[i];
        }
    }
    printf("\nFirst Largest : %d ",l1);
    printf("\nSecond Largest : %d ",l2);


}