#include<stdio.h>

void binary_conversion(int num)
{
    int a[100];
    int rem, i = 0;

    while(num != 0)
    {
       a[i] = num%2;
        num /= 2;

        i++;
    }

    for(int j = i-1; j >= 0; j-- )
    {
        printf("%d", a[j]);
    }

}

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    binary_conversion(num);
    return 0;

}