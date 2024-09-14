#include<stdio.h>
#define size 100
#define chr_size 255

int main()
{
    char str[size];
    int fre[chr_size] = {0};
    int ascii  = 0;
    int  i = 0;

    printf("Enter the String : ");
    fgets(str, size, stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        ascii = (int) str[i];
        fre[ascii]++;
        i++;
    }

    for(i = 0; i < chr_size; i++){
        if(fre[i] > 0){
            char character = (char) i;
            printf("\nThe character \'%c\' repeats %d times.",character, fre[i]);
        }
    }
    printf("\n");
}