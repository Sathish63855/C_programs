#include<stdio.h>
#define str_size 100

int main()
{
    char str[str_size];
    int i, wrd;

    printf("Enter the string : ");
    fgets(str, str_size, stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
        {
            wrd++;
        }
    }

    printf("The number of words in the String : %d \n", wrd);

    return 0;
}