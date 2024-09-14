#include<stdio.h>

int main()
{
    int num;
    int sum = 0;

    printf("Input Integers(enter 0 to stop) : \n");
    
    // while(1)
    // {
    //     printf("Input a number : ");
    //     scanf("%d", &num);

    //     if(num == 0)
    //     {
    //         break;
    //     }

    //     if(num > 0)
    //     {
    //         sum += num;
    //     }

    // }
    int i = 0;
    while(num != 0)
    {
        printf("Enter the number %d : ", ++i);
        scanf("%d", &num);

        if(num > 0)
        {
            sum  += num;
        }
    }

    printf("Sum of positive numbers : %d\n", sum);
    return 0;
}