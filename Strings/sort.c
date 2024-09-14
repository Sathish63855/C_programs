#include<stdio.h>
#include<string.h>
#define size 50

int main()
{
    int i, j, n;
    char name[size][size*2], temp[size];

    printf("Input the number of strings : ");
    scanf("%d", &n);

    printf("Input strings : \n");
    for( i = 0; i <= n; i++)
    {
        fgets(name[i], sizeof(name[i]), stdin);
    }

    for( i = 1; i < n; i++)
    {
        for( j = 0; j <= n-i; j++)
        {
            if(strcmp(name[j], name[j+1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy()
            }
        }
         
    }
}