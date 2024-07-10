#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], l;
    
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    while( str[l] != '\0' )
    {
        printf("%c ", str[l]);
        l++;
    }

    return 0;
}