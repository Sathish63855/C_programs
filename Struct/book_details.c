#include<stdio.h>
#define size 100

struct Book{
    char title[size];
    char name[size];
    int price;
};

int  get_details(struct Book *books);
void print_details(int N, struct Book *books);

int main(){

    int i = 0;
    struct Book books[size];
    
    get_details(books);
    
    return 0;
}


void print_details(int N, struct Book *books)
{
    for(int j = 0; j <= N; j++)
    {
        printf("\nBook %d\n", j+1);
        printf("*********************\n");
        printf("Title  : %s\n", books[j].title);
        printf("Author : %s\n", books[j].name);
        printf("Price  : %d\n", books[j].price);
    }
}

int  get_details(struct Book *books)
{
    int i = 0, N = 0;
    do
    {
        printf("Input details for  %d : \n", i+1);

        printf("Title  : ");
        scanf("%[^\n]", books[i].title);

        printf("Author : ");
        fgets(books->name, size, stdin);
        // scanf("%[^\n]", &books[i].name);

        printf("Price  : ");
        scanf("%d", &books[i].price);

        N++;

        char dec;

        if( i < N)
        {
            printf("Do you want to enter more student details  y / n : ");
            scanf(" %c", &dec);
        
            if( dec == 'n' || dec == 'N')
            {
                break;
            }
        } 
        i++;
    }
    while(i <= N);

    print_details(i, books);
}
