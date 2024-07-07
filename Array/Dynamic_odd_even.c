#include<stdio.h>
#include<stdlib.h>

int odd_even(int n,int *num, int *odd, int *even);

int main(){
    
    int i,j,n,*num,*odd,*even;
    
    // Get n value
    printf("\nEnter the number of values : ");
    scanf("%d",&n);

    num = (int *)malloc( n * sizeof(int));
    if(num == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    odd = (int *)malloc( n * sizeof(int));
    if(odd == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    even = (int *)malloc( n * sizeof(int));
    if(even == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    // Get elements
    printf("\nEnter the elements : \n");
    for( i = 0; i < n; i++ ){
        scanf("%d", num+i);
    }

    // Print all elements of user array
    printf("\nThe Elements entered : \n");
    for( i = 0; i < n; i++ ){
        printf("%d ", num[i]);
    }

    odd_even( n, num,odd,even);

    free(num);
    free(odd);
    free(even);

}

odd_even(int n,int *num, int *odd, int *even){
    
    int i,e = 0, o = 0;

    for( i = 0; i < n; i++){
        if(num[i]&1){
            odd[o] = num[i];
            o++;
        }
        else{
            even[e] = num[i];
            e++;
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