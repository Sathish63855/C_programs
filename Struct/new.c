#include<stdio.h>

void swap(int*, int*);
int main()
{
    int a, b;

    printf("Enter the number1 : ");
    scanf("%d", &a);

    printf("Enter the number2 : ");
    scanf("%d", &b);

    printf("Before swapping : \n\ta = %d\n\tb = %d",a, b);

    swap(&a, &b);

    printf("\nAfter swapping : \n\ta = %d\n\tb = %d",a, b);
    

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}