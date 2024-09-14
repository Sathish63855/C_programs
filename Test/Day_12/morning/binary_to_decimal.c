#include<stdio.h>

void binary_decimal(int);

int main()
{
    int num;

    printf("Enter the binary number : ");
    scanf("%d", &num);

    binary_decimal(num);

    return 0;
}

void binary_decimal(int num)
{
    int i, rem, sum = 0;
    int mul = 1;

    while(num != 0)
    {
        rem = num%10;

        if( rem != 0)
        {
            sum += mul;
        }      

        mul *= 2;
        num /= 10;
    }

    printf("The Decimal Value is %d\n", sum);
}
