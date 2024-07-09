#include <stdio.h>

void printArray(int arr1[], int n)
{
    printf("\nThe new list is : ");
    for (int i = 0; i < n; i++) {
        printf("  %d", arr1[i]);
    }
}

void main() {
    int arr1[50] = {0}, i, pos, n, k;

    // Prompt user for input
    printf("\n\nDelete an element at the desired position from an array:\n");
    printf("---------------------------------------------------------\n");
    printf("Input the size of the array : ");
    scanf("%d", &n);

    // Input values for the array
    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("\nInput the number of element to delete: ");
    scanf("%d", &k);
    
    // Input the position to delete


    // Locate the position in the array
    // Shift elements to the left to replace the deleted element
    for( int j = 0; j < k; j++){
        printf("\n\nInput the position where to delete: ");
        scanf("%d", &pos);
        for( i = pos-1; i < n; i++) {
        arr1[i] = arr1[i + 1];
    }
        printArray(arr1,n);
    }

    // Display the new list after deletion

    printf("\n\n");
}
