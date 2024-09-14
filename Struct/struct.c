#include<stdio.h>
#define size 100

struct student{
    char name[size];
    int age;
}student1, student2;

void print(struct student* student1,struct student* student2)
{
    printf("%s \n", student1->name);
    printf("%d \n", student1->age);

    printf("%s \n", student2->name);
    printf("%d \n", student2->age);

}

int main()
{

    printf("Enter your name : ");
    scanf("%s", student1.name);
    printf("Age : ");
    scanf("%d", &student1.age);

    printf("Enter your name : ");
    scanf("%s", student2.name);
    printf("Age : ");
    scanf("%d", &student2.age);
    print(&student1, &student2);


    return 0;


}