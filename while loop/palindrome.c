#include<stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    int tem = num;

    while(num > 0)
    {
        sum = sum*10 + num%10;
        num /= 10;
    }
    
    (sum == tem) ? printf("The number is a palindrome.\n") : printf("The number is not a palindrome.\n");
}