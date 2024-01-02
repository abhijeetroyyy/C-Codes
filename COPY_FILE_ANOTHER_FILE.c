//Write a program to copy a file into another file

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    // Get source file name from the user
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    // Open source file in binary read mode
    sourceFile = fopen(sourceFileName, "rb");

    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Get destination file name from the user
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    // Open destination file in binary write mode
    destinationFile = fopen(destinationFileName, "wb");

    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 2;
    }

    // Copy content of source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copy successful.\n");

    return 0;
}
