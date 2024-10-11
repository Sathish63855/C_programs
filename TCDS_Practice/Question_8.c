#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest number using if-else statements
    if (num1 >= num2 && num1 >= num3) 
    {
        largest = num1;
    } 
    else if (num2 >= num1 && num2 >= num3) 
    {
        largest = num2;
    } 
    else 
    {
        largest = num3;
    }

    // Output the result
    printf("The largest number using if-else: %d\n", largest);

    return 0;
}

// #include <stdio.h>

// int main() {
//     int num1, num2, num3, largest;

//     // Prompt the user to enter three numbers
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     // Determine the largest number using the ternary operator
//     largest = (num1 >= num2 && num1 >= num3) ? num1 : (num2 >= num1 && num2 >= num3) ? num2 : num3;

//     // Output the result
//     printf("The largest number using ternary operator: %d\n", largest);

//     return 0;
// }
