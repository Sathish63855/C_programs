#include<stdio.h>

void print_array(int arr[],int n);
void left_shift(int left[], int n, int k);
void right_shift(int right[], int n, int k);


int main(){

    int i, j, n, shift,opr;
    int arr[100];

    printf("Enter the number of elements : "); 
    scanf("%d", &n);
    

    printf("Enter the elements : \n");
    for( i = 0; i < n; i++){
        printf("A[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements are : ");
    for( i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nRight rotate : 1 | Left rotate : 2 \nEnter operation :  ");
    scanf("%d", &opr);

    printf("Enter the number of rotations : "); 
    scanf("%d", &shift);

    switch(opr)
    {
        case 1 :
            right_shift(arr, n, shift);
            break;
        case 2 :
            left_shift(arr, n, shift);
            break;
    }

    // print_array(arr,n);
    return 0;
}


// Print_array Function
void print_array(int arr[],int n)
{
    int i;
    for( i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

}

//Right_shift Function
void right_shift(int right[], int n, int k)
{
    int i,j,last;

    for( i = 0; i < k; i++)
    {
        last = right[n-1];

        for( j = n-1; j > 0; j--){
            right[j] = right[j-1];
        }

        right[0] = last; 
    }
    printf("\nThe elements After Right shift : ");
    print_array(right,n);
}

void left_shift(int left[], int n, int k)
{
    int i,j,first;

    for( i = 0; i < k; i++){
        
        first = left[0];

        for( j = 0; j < n-1; j++)
        {
            left[j] = left[j+1];
        }

        left[n-1] = first;
    }
    printf("\nThe elements After Left shift : ");
    print_array(left,n);
}