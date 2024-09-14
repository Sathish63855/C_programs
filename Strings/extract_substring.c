#include<stdio.h>
#define size 100

int main()
{
    char str[size], sstr[size];
    int pos, l , c = 0;

    printf("Enter the string : ");
    fgets(str, size, stdin);

    printf("Enter position where to start searching : ");
    scanf("%d", &pos);

    printf("Input the length of string : ");
    scanf("%d", &l);

    while(c < l)
    {
        sstr[c] = str[pos+c-1];
        c++;
    }
    sstr[c] = '\0';

    printf("The substring retrieved from string is \"%s\"\n", sstr);

    return 0;


}