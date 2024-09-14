#include<stdio.h>
#include<string.h>
#define size 25

int main()
{
    char name[size][size*2], temp[size];
    int n, j, i;

    printf("Input number of strings : ");
    scanf("%d", &n);

    printf("Input string %d : \n", n);
    for(i = 0; i <= n; i++)
    {
        fgets(name[i], sizeof(name[i]), stdin);
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 0; j <= n-i; j++)
        {
            if(strcmp(name[j],name[j+1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }

    printf("The strings after sorting : \n");
    for(i = 0; i <= n; i++)
    {
        printf("%s",name[i]);
    }
    return 0;
}