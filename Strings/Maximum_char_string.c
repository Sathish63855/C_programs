#include<stdio.h>
#define str_size 100
#define chr_size 255

int main()
{
    char str[str_size];
    int ch_fre[chr_size];
    int i = 0, max = 0;
    int ascii;

    printf("input the string : ");
    fgets(str, str_size, stdin);

    for(i = 0; i < chr_size; i++)
    {
        ch_fre[i] = 0;
    }

    i = 0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        ch_fre[ascii] += 1;
        i++;
    }

    max = 0;
    for(i = 0; i < chr_size; i++)
    {
        if(i != 32){
            if( ch_fre[i] > ch_fre[max])
            {
                max = i;
            } 
        }
    }

    printf("The Highest frequency of charavcter '%c' appears number of times : %d \n\n", max, ch_fre[max]);

    return 0;
}