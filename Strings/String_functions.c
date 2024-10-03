#include<stdio.h>
#include<string.h>

void main()
{
    char str1[30];
    char str2[30];

    printf("Enter String : ");
    gets(str1);

    strcpy(str2,str1);
    printf("%d\n", strcmp(str1,str2)); //0
    printf("%s\n", strupr(str1)); // SATHISH
    printf("%s\n", strlwr(str1)); //sathish
    printf("%s\n", strcat(str2,str1));//SathishSathish
    printf("%s\n", strrev(str1));//hsihtaS
    printf("%d\n", strlen(str1));//7
    
}