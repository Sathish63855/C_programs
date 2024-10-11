#include <stdio.h>

int main() {
    char str[100], reversedStr[100];
    int length = 0, i, j;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }
    // Reverse the string using a for loop
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i];
    }
    reversedStr[j] = '\0'; // Null-terminate the reversed string

    // Output the reversed string
    printf("Reversed string: %s\n", reversedStr);

    return 0;
}
