#include <stdio.h>
#define Size 100;

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the First String: ");
    // scanf("%s", str1);
    gets(str1);

    printf("Enter the Second String: ");
    // scanf("%s", str2);
    gets(str2);

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("Strings are not the same.\n");
            return 0;
        }
        i++;
    }


    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are the same.\n");
    } else {
        printf("Strings are not the same.\n");
    }

    return 0;
}
