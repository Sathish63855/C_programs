#include <stdio.h>
void main() {
    int n, i, j;
    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // Loop to generate the pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
