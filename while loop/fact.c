#include<stdio.h>

int main()
{
    int num;
    int product = 1;

    printf("Enter the number : ");
    scanf("%d", &num);
    int n = num;

    while(num != 0)
    {
        product *= num;
        num--;
    }
    printf("The factorial of %d is %d\n", n, product);

    return 0;
}