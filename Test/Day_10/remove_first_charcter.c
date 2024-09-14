#include<stdio.h>
#define size 100
#define chr_size 255

int main()
{
    char str[size];
    int fre[chr_size] = {0};
    int ascii  = 0;

    printf("Enter the String : ");
    fgets(str, size, stdin);

    int  i = 0;
    while(str[i] != '\0')
    {
        ascii = (int) str[i];
        fre[ascii]++;
        i++;
    }

    for(i = 0; i < chr_size; i++){
        if( fre[i] > 1)
        {
            char character = (char) i;
            printf("%c", character);
        }
    }
    printf("\n");
}