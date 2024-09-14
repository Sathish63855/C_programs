#include<stdio.h>
#define size 100
#define chr_size 255


void remove_dup(char str[])
{
    int i = 0, j;
    int fre_chr[chr_size];
    int value = 1;

    while( str[i] != '\0')
    {
        for( j = 0; j < size-i-1; j++)
        {
            if( str[j] == str[i])
            {
                
            }
        }
        
        i++;
    }


}

int main()
{
    char str[size];

    printf("Enter the string : ");
    fgets(str, size, stdin);

    remove_dup(str);

    return 0;
}