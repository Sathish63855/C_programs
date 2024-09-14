#include<stdio.h>
#include<string.h>
#define size 100

void get_str(char *str);
int len(char *str);

int main()
{
    char str[size];
    
    while(1)
    {
        get_str(str);
        int l = len(str);
        if( l == 8)
        {
            printf("username is valid\n");
            break;
        }
        else if(l < 8)
        {
            printf("The username must contain 8 characters\n");
        }
        else
        {
            printf("Exceeds the size of username\n");
        }
    }

    return 0;
}

void get_str(char *str)
{
    printf("Enter the username : ");
    fgets(str, size, stdin);
}

int len(char *str)
{
    int i = 0, l = 0;
    while(str[i] != '\0')
    {
        l++;
        i++;
    }
    return l;
}