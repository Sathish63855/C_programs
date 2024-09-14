#include<stdio.h>
#define str_size 100
// #include<string.h>

int strcmp(char s1[],char s2[])
{
    int flag = 0;
    for(int i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++ )
    {
        if( s1[i] != s2[i])
        {
            flag = 1;
            break; 
        }
    }
    return flag;
}

int main()
{
    char str1[str_size];
    char str2[str_size];
    int i, check = 1;

    printf("Enter the string 1 : ");
    fgets(str1, str_size, stdin);
    
    printf("Enter the string 2 : ");
    fgets(str2, str_size, stdin);

    // check = strcmp(str1,str2); 
    check = strcmp(str1, str2); 

    if(check == 0)
    {
        printf("The strings are equal.\n");
    }
    else{
        printf("The strings are not equal.\n");
    }

    return 0;
}