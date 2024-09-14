#include<stdio.h>

int main()
{
    int num = 1;
    int product = 1;

    while(num <= 5)
    {
        product *= num;

        printf("Current Number : %d, Current product : %d .\n", num, product);

        num++;
    }

    return 0;
}