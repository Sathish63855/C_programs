#include<stdio.h>
#define str_size 100

int main()
{
    int alpha, digits, special, i;
    char str1[str_size], str2[str_size];
    alpha = digits = special = i = 0;

    printf("Enter the string 1 : ");
    fgets(str1, str_size, stdin);

    while( str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    printf("\nThe First String is : %s \n", str1);
    printf("\nThe Second String is : %s ", str2);
    printf("Number of character copied : %d \n", i-1);
    
    return 0;
}