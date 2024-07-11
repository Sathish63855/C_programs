#include <stdio.h>

#define size 50

struct Student {
    char name[size];
    int age;
    float totalMarks;
};

int main() {
    struct Student student[100];
    int i = 0, N;

    printf("Enter the number of Students: ");
    scanf("%d", &N);

    while (i < N) {
        printf("Input details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", student[i].name);

        printf("Age: ");
        scanf("%d", &student[i].age);

        printf("Total Marks: ");
        scanf("%f", &student[i].totalMarks);
        i++;
    }

    for (int j = 0; j < i; j++) {
        printf("Student %d\n", j + 1);
        printf("----------   \n");
        printf(" Name: %s\n", student[j].name);
        printf(" Age: %d\n", student[j].age);
        printf(" Total Marks: %.2f\n", student[j].totalMarks);
    }

    return 0;
}
