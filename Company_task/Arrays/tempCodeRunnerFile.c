#include<stdio.h>

void right_shift(int [],int, int);
void left_shift(int [],int, int);

int main()
{
    int i, j ,n;
    int shift;
    int arr[100];

    printf("Enter the elements of array : ");
    scanf("%d", &n);

    printf("Enter Number of shift : ");
    scanf("%d", &shift);

    printf("Enter the elements : \n");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\n");
    right_shift(arr,shift,n);
    // left_shift(arr,shift,n);

    return 0;
}

void right_shift(int right[],int shift, int n){
 
    int i, j;