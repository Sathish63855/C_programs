#include<stdio.h>

int Amstrong_num(int);
int perfect_number(int);


int main()
{
    int num;

    printf("Enter the  number : ");
    scanf("%d", &num);
     
    if(Amstrong_num(num))
    {
        printf("The %d is an amstrong number.\n\n", num);
    }
    else
    {
        printf("The %d is not an amstrong number.\n\n", num);

    }

    if(perfect_number(num))
    {
        printf("The %d is an perfect number.\n\n", num);
    }
    else
    {
        printf("The %d is not an perfect number.\n\n", num);
    }

    return 0;


}

int  Amstrong_num(int n1){
    int sum, num, div;
    sum = 0;
    num = n1;

    while(num != 0)
    {
        div = num%10;
        sum += div*div*div;
        num /= 10;
    }

    return (n1 == sum);
}


int perfect_number(int n1)
{
    int  i, sum, num;
    sum = 0;
    num = n1;

    for(i = 1; i < num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }

    return (n1 == sum);

}