#include<stdio.h>
#define size 100

// User Defined functions
void vowel_consonent(char str[]);


// Main Function
int main()
{
    char str[size];

    printf("Enter the string : ");
    fgets(str,size,stdin);

    vowel_consonent(str);

    return 0;

}

void vowel_consonent(char str[])
{
    int i , vows, cons;
    i = vows = cons = 0;

    char vowel_arr[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O','u', 'U'};

    while( str[i] != '\0')
    {
        // if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' || str[i] == 'I')
        if( vowel_arr[i] == str[i])
        {
            vows++;
        }
        else
        {
            cons++;
        }
        i++;
    }

    printf("The count of vowels : %d\n", vows);
    printf("The count of consonants : %d\n", cons);

}