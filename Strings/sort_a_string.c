#include<stdio.h>
#define size 50

int length(char *str)
{
    int i = 0, len = 0;

    while(*(str + len) != '\0')
    {
        len++;
    }

    return len;
}

int main()
{
    char str[size];
    int len, temp, ascii;
    
    printf("Enter the string : ");
    fgets(str, size, stdin);

    len  = length(str);

    for(int i = 0; i < len-1; i++)
    {
        // int ascii1, ascii2;

        for(int j = i+1; j < len; j++)
        {
            // ascii1 = (int)str[i];
            // ascii2 = (int)str[j];

            // if(ascii1 > ascii2)
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            } 
        }

    }

    printf("%s\n", str);

}