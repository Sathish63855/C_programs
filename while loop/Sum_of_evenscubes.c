#include<stdio.h>

int main()
{
    int limit;

    printf("Enter the limit : ");
    scanf("%d", &limit);
    int num  = 2;

    int sum = 0;
    while(num <= limit)
    {
        int cube = num * num * num;
        sum += cube;
        num += 2;
    }
    printf("Sum of cubes of even numbers up to %d : %d \n", limit, sum);
    return 0;
}
