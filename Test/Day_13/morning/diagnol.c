#include<stdio.h>
#define size 100

int len(char *a)
{
    int i = 0, l = 0;
    while(a[i] != '\0')
    {
        l++;
        i++;
    }
    return l;
}

void diagnol(char *a)
{
    int n = len(a)-1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if( i == j)
            {
                printf("%c ", a[i]);

            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    char str[size];

    printf("Enter the string : ");
    fgets(str, size, stdin);

    diagnol(str);

    return 0;
}