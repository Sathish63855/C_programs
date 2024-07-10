#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], l;
    
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    // while (str[l] != '\0')
    // {
    //     l++;
    // }

    printf("The length of the string is %d ", strlen(str)-1);
    printf("The length of the string is %d ", l-1);

    return 0;
}