#include<stdio.h>

int check_perfect(int n1);
void PerfectNumbers(int, int);

int main()
{
    int start, end;

    printf("Input lowest limit : ");
    scanf("%d", &start);

    printf("Input Highest limit : ");
    scanf("%d", &end);

    printf("The perfect Numbers between %d and %d : \n", start, end);
    PerfectNumbers(start, end);
    printf("\n\n");

    return 0;
}

int check_perfect(int n1)
{
    int i, sum;
    sum = 0;

    for(i = 1; i < n1; i++)
    {
        if(n1%i == 0)
        {
            sum += i;
        }
    }

    if(sum == n1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void PerfectNumbers(int start, int end)
{
    while( start <= end)
    {
        if(check_perfect(start))
        {
            printf("%d ",start);
        }
        start++;
    }
}