#include<stdio.h>
#define size 100

void compare(char *str, char *str2);
void get_string(char *str);

int main()
{
    char str1[size];
    char str2[size];

    get_string(str1);
    get_string(str2);

    compare(str1, str2);

    return 0;
}

void get_string(char *str)
{
    printf("Enter the string : ");
    fgets(str, size, stdin);
}

void compare(char *str1, char *str2)
{
    int check = 1;

    while(*(str1)++ != '\0' && *(str2)++ != '\0')
    // while(str1 != '\0' && str2 != '\0')
    {
        if(*(str1)++ != *(str2)++ )
        {
            check  = 0;
            break;
        }
    }

    (check == 0) ? printf("Not Equal\n") : printf("Equal\n");
}
