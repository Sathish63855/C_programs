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

    for( i = 0; i < shift; i++)
    {
        int last = right[n-1];
        
        for( j = n-1; j > 0; j--)
        {
            right[j] = right[j-1]; 
        }

        right[0] = last;
    }

    printf("The right shifted ele ments : ");
    for( i = 0; i < n; i++){
        printf("%d ",right[i]);
    }
}

// void left_shift(int left[],int shift, int n){

//     int i, j;

//     for( i = 0; i < shift; i++)
//     {
//         int first = left[0];
        
//         for( j = 1; j < n; j++)
//         {
//             left[j-1] = left[j]; 
//         }

//         left[n-1] = first;
//     }

//     printf("The left shifted elements : ");
//     for( i = 0; i < n; i++){
//         printf("%d ", left[i]);
//     }
// }