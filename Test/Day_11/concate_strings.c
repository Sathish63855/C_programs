#include<stdio.h>
#define size 100

void get_string(char*, int );
void concate_strings(char*, char*);
int len(char*);

int main()
{
    char str1[size], str2[size];
    get_string(str1, 1);
    get_string(str2, 2);
    concate_strings(str1, str2);
    return 0;
}

void get_string(char *str, int n)
{
    printf("Enter the string %d : ", n);
    fgets(str, size, stdin);
}

int len(char *str)
{
    int i = 0, l = 0;
    while(str[i] != '\0')
    {
        l++;
        i++;
    }
    return l;
}

void concate_strings(char *str1, char *str2)
{
    int l1 = len(str1);
    int l2 = len(str2);

    while(*(str2) != '\0' && l1 < l2+l1)
    {
        *(str1+l1) = *(str2)++;
        l1++;
    }

    printf("%s", str1);

}


