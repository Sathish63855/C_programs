#include<stdio.h>

// user functions
void odd_even(int a[],int n);

int main(){
    
    int i,j,n,a[100];

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
    odd_even(a,n);
}

void odd_even(int a[],int n){

    int i, e = 0, o = 0, odd[100], even[100];

    for( i = 0; i < n; i++){
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
    for( i = 0; i < e; i++ ){
        printf("%d ", even[i]);
    }

    printf("\nOdd Numbers : ");
    for( i = 0; i < o; i++ ){
        printf("%d ", odd[i]);
    }

}
