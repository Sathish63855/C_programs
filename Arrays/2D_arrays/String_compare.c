#include<stdio.h>
#define str_size 100
// #include<string.h>

int strcmp(char *s1,char *s2)
{
    int flag = 0;
    while( *s1 != '\0' || *s2 != '\0' )
    {
        if( *s1 == *s2)
        {
            s1++;
            s2++;
        }
        else if(( *s1 == '\0' && *s2 == '\0') || ( *s1 != '\0' && *s2 != '\0') || ( *s1 != *s2 ))
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

    // flag = test(str1, str2);

    // check = strcmp(str1,str2); 
    check = strcmp(str1,str2); 


    if(check == 0)
    {
        printf("The strings are equal");
    }
    else{
        printf("The strings are not  equal");

    }
    return 0;
}