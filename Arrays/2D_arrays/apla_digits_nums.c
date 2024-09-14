#include<stdio.h>
#define str_size 100
// #include<string.h>

// void print(int n, char value[])
// {
// }

void count(char s1[])
{
    int alpha, digits, special;
    alpha = digits = special = 0;
    char value[20];

    for(int i = 0; s1[i] != '\0'; i++ )
    {
        if((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z'))
        {
            alpha++;
        }
        else if(s1[i] >= '0' && s1[i] <= '9' )
        {
            digits++;
        }
        else
        {
            special++;
        }
    }

    printf("The number of %s is %d", value, alpha);
    printf("The number of %s is %d", value, digits);
    printf("The number of %s is %d", value, special);
}

int main()
{
    char str1[str_size];
    char str2[str_size];
    int i, check = 1;

    printf("Enter the string 1 : ");
    fgets(str1, str_size, stdin);

    count(str1);

    if(check == 0)
    {
        printf("The strings are equal.\n");
    }
    else{
        printf("The strings are not equal.\n");
    }

    return 0;
}