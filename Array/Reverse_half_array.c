#include<stdio.h>

void reverse(int a[],int n){
    int i,j,temp;
     for( i = 0, j = (n/2)-1; i < n/4; i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("\nAfter : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }

}

int main(){
    
    int i,j,n,temp,a[100];

    // Get n value
    printf("\nEnter the number of values : ");
    scanf("%d",&n);

    // Get elements
    printf("\nEnter the elements : \n");
    for( i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    printf("\nBefore : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }        

   reverse(a,n);
}