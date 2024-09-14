#include<stdio.h>
#define size 100


void vowel_count(char str[])
{
    int i = 0, vows, cons;

    while( str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' || str[i] == 'I')
        {
            vows++;
        }
        else
        {
            cons++;
        }
    }

    printf("The count of vowels : %d.\n", vows);
    printf("The count of consonants : %d.\n", cons);


}

int main()
{
    char str[size];

    printf("Enter the string : ");
    fgets(str, size ,stdin);

    vowel_count(str);

    return 0;
}