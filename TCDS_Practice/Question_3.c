#include <stdio.h>
int main() {
    float marks1, marks2, marks3, marks4, marks5, total, average;
    char grade;
    // Prompt the user to enter marks for five subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &marks4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &marks5);
    // Calculate total and average marks
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5.0;

  //Determine grade based on average
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output the results
    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
