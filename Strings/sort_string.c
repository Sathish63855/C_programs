#include<stdio.h>

int len(char*);
void sort(char*);

int main()
{
    char str[100];
    int i, j;

    printf("Ener the string : ");
    fgets(str, 100, stdin);
    sort(str);

    return 0;
}


int len(char *str)
{
    int l = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}

void sort(char *str)
{
    int tem, l;

    l = len(str)-2;

    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < l-i; j++)
        {
            if(str[j] > str[j+1])
            {
                tem = str[j];
                str[j] = str[j+1];
                str[j+1] = tem;
            }
        }
    }

    printf("Ater the sorting the string appears : %s \n", str);
}
