#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], l = 0;
    
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    // while( str[l] != '\0' )
    // {
        // printf("%c ", str[l]);
    //     l++;
        
    // }

    l = strlen(str);

    // while( l > 0)
    // {
    //     l--;
    //     printf("%c ", str[l] );
    // }

    for( str[l] = '\0'; l >= 0; l--)
    {
        printf("%c ", str[l]);
    }

    return 0;
}