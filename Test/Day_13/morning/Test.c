#include<stdio.h>

void fibonacci(int num)
{
    int a = 0, b = 1;
    int tem;

    if(num == 0)
    {
        printf("Enter number more than 0\n");
    }
    else if(num == 1)
    {
        printf("%d\n", a);
    }
    else if(num == 2)
    {
        printf("%d %d\n", a, b);
    }
    else
    {
        int n = num-1, i = 0;
        printf("%d ", a);

        while(n != 0)
        {
            tem = a + b;
            b = a;
            a = tem;
            printf("%d ", a);
            i++;
            n--;
        }
    }
}

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    fibonacci(num);

    return 0;
}