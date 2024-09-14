#include<stdio.h>

void prime(int num)
{
    int flag = 0;

    for(int i = 2; i <= num/2; i++)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
    }

    (flag == 0) ? printf("It is a prime number") : printf("It is not a prime number");

}

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    prime(num);
}