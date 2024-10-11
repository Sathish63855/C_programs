#include <stdio.h>
// Define a structure to hold student information
struct Student {
    int rollNumber;
    char name[50];
    float marks1, marks2, marks3;
};
int main() {
    struct Student students[5];
    int i;
    // Input information for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks in Subject 1: ");
        scanf("%f", &students[i].marks1);
        printf("Marks in Subject 2: ");
        scanf("%f", &students[i].marks2);
        printf("Marks in Subject 3: ");
        scanf("%f", &students[i].marks3);
        printf("\n");
    }

    // Display the information of 5 students
    printf("Student Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks in Subject 1: %.2f\n", students[i].marks1);
        printf("Marks in Subject 2: %.2f\n", students[i].marks2);
        printf("Marks in Subject 3: %.2f\n", students[i].marks3);
        printf("\n");
    }

    return 0;
}
