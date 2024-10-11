#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Read data from source file and write it to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);
    printf("Data copied successfully from source.txt to destination.txt\n");
}
