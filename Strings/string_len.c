#include<stdio.h>

void main()
{
    char str[30];

    printf("Enter a String : ");
    scanf("%s", &str);
    
    int i = 0, len = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }

    printf("The length of the string is %d",len);
}