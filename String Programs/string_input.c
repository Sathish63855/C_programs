#include<stdio.h>

int main()
{
    // char str[100] = "sathish";
    // printf("%s",str);

    char str[50];
    
    printf("Enter the string : ");
    // fgets(str, 50, stdin);
    fgets(str, sizeof(str), stdin);
    puts(str);
    return 0;
}