#include<stdio.h>
#define size 100

void sort(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        int j = 0;
        while(s[j+1] != '\0')
        {
            if(s[j] > s[j+1])
            {
                char tem;
                tem = s[j];
                s[j] = s[j+1];
                s[j+1] = tem;
            }
            j++;
        }
        i++;
    }
}

void anagram(char str1[], char str2[])
{
    sort(str1);
    sort(str2);
    
    int i = 0;
    while(str1[i] != str2[i] )
    {

    }
}

int main()
{
    char str1[size];
    char str2[size];

    printf("Enter the string 1 : ");
    fgets(str1, size, stdin);

    printf("Enter the string 2 : ");
    fgets(str2, size, stdin);

    anagram(str1, str2);

    return 0;
}