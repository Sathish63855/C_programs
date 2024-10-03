#include<stdio.h>
#include<string.h>

void main()
{
    char str1[30];
    char str2[30];

    printf("Enter String : ");
    gets(str1);
    printf("Enter String : ");
    gets(str2);

    if(strcmp(str1,str2) == 0)
    {
        printf("Strings are equal");
    }
    else{
        printf("Not Equal");
    }
    printf("%s\n", strupr(str1));
    printf("%s\n", strlwr(str1));
    printf("%s\n", strcat(str1,str2));
    printf("%s\n", strrev(str1));
}