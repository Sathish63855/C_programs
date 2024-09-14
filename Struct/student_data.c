#include<stdio.h>
// #include<stdlib.h>

#define size 100

struct Student{
    char name[size];
    int age;
    int marks;
};

void print_details(int N, struct Student *students)
{
    for(int j = 0; j <= N; j++)
    {
        printf("\nStudent %d\n", j+1);
        printf("*********************\n");
        printf("Name       : %s\n", students[j].name);
        printf("Age        : %d\n", students[j].age);
        printf("Totalmarks : %d\n", students[j].marks);
    }
}

int  get_details(struct Student *students)
{
    int i = 0, N = 0;
    do
    {
        printf("Input details for Student %d : \n", i+1);

        printf("Name : ");
        scanf(" %[^\n]", students[i].name);

        printf("Age : ");
        scanf("%d", &students[i].age);

        printf("Mark : ");
        scanf("%d", &students[i].marks);

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

    print_details(i, students);
}


int main(){

    int i = 0;
    struct Student students[size];
    
    get_details(students);
    
    return 0;
}