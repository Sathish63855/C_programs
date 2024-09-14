#include<stdio.h>
#define size 100 

int main()
{
    char str[size];

    printf("Enter the string : ");
    fgets(str, size, stdin);

    // printf("The original String : ");
    // int len = printf("%s", str);

    // printf("The length of string is %d", len - 1);

    int l = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }

    for(int  i = l; i >= 0; i--)
    {
        if(str[i] != ' ')
        {
            printf("%c", str[i]);
        }
    }

    return 0;

}