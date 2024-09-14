#include<stdio.h>

inline int square(int x)
{
    return x*x;
}

int main()
{
    int number = 5;
    int result;

    result = square(number);
    printf("The square of %d is %d\n", number, result);

    return 0;
}