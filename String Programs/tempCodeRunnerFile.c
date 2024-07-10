#include<stdio.h>
#define str_size 100

int main()
{
    int alpha,digits,special;
    char str[str_size];
    alpha = digits = special = 0;

    printf("Enter the string : ");
    fgets(str, str_size, stdin);

    int i = 0;
    while( str[i] != '\0' )
    {
        if((str[i] >= 'a' && str[i] <= 'z' ) || (str[i] >= 'A' && str[i] <= 'Z') )
        {
            alpha++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }
        i++;
    }

    printf("Number of Alphabets : %d \n", alpha);
    printf("Number of digits : %d \n", digits);
    printf("Number of special : %d \n", special);

    return 0;
}