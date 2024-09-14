#include<stdio.h>

int replace_zero(int);

int main()
{
    int num;
    
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The replaced value is %d\n",replace_zero(num));
    return 0;
}

int replace_zero(int num)
{
    int rem, sum  = 0;
    while(num != 0)
    {
        rem = num%10;
        (rem == 0) ? rem = 0+1 : rem ;
        sum = sum*10 + rem;
        num /= 10;
    }
    return sum;
}