#include<stdio.h>


int reverse_num(int num)
{
    int i = 0, a[100], count = 0 ;

    while( num != 0)
    {
        int rem;

        rem = num%10;
        a[i] = rem;
        num /= 10;

        i++;
        count++;

    }
    
    for(i = 0; i < count; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    reverse_num(num);
}