#include<stdio.h>

void getArray(int *, int);
void printArray(int *, int); 
void mulArray(int *, int);


int main()
{
    int a[10];
    int n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    getArray(a, n);

    return 0;
}

void mulArray(int *a, int n)
{
    int i, j, tem[10] = {0};
    for(i = 0; i < n; i++)
    {
        tem[i] = a[i];
    }

    for(i = 0; i < n; i++)
    {
        int mul = 1;
        for(j = 0; j < n; j++)
        {
            if( i != j)
            {
                mul *= tem[j];
                a[i] = mul;
            }
        }
    }
    printArray(tem,n);

}


void getArray(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", a+i);
    }
}

void printArray(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }   
}

