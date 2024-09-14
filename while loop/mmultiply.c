#include<stdio.h>

int main()
{
    int num;

    printf("Enter the postive number : ");
    scanf("%d", &num);

    if( num <= 0){
        printf("Enter the positive number!!!");
    }
    else
    {
        int i = 1;
        while( i <= 10)
        {
            printf("%d * %d = %d\n", num, i, num*i);
            i++;
        }
    }
}
