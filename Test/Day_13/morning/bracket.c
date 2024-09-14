#include<stdio.h>
#define size 100

char get_str(char *);
void print_str(char *);
void remove_bracket(char *str);


int main()
{
    char str[size];

    *str = get_str(str);
    remove_bracket(str);
    return 0;
}

char get_str(char *a)
{
    printf("Enter the string : ");
    fgets(a, size, stdin);

    return *a;
}

void print_str(char *a)
{
    printf("Entered string : %s", a);
}

void remove_bracket(char *str)
{
    for(int i = 0, j = 0; str[i] != '\0'; i++, j++)
    {
        for(int j = i+1; str[j] != '\0'; j++)
        {
            if( str[i] == str[j] && (str[i] >= 'a' && str[i] <= 'z'))
            {
                printf("%c\n", str[j]);
            }
        }
    }
}
