#include<stdio.h>

void odd_even()

int main(){
    
    int i,j,e,n,o,temp,a[100],odd[100],even[100];

    // Get n value
    printf("\nEnter the number of values : ");
    scanf("%d",&n);

    // Get elements
    printf("\nEnter the elements : \n");
    for( i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }

    // Print all elements of user array
    printf("\nEnter the elements : \n");
    for( i = 0; i < n; i++ ){
        printf("%d ", a[i]);
    }

   

}

void odd_even(){
    for( i = 0,e = 0,o = 0; i < n/2; i++){
        if(a[i]%2 == 0){
            even[e] = a[i];
            e++;
        }
        else{
            odd[o] = a[i];
            o++;
        }
    }

    printf("\nEven Numbers : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", even[i]);
    }

    printf("\nOdd Numbers : ");
    for( i = 0; i < n; i++ ){
        printf("%d ", odd[i]);
    }

}
