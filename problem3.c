// Write a program to append the content of file at the another file
#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    // Get source file name from the user
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    // Open source file in read mode
    sourceFile = fopen(sourceFileName, "r");

    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Get destination file name from the user
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    // Open destination file in append mode
    destinationFile = fopen(destinationFileName, "a");

    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 2;
    }

    // Append content of source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File append successful.\n");

    return 0;
}
