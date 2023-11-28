//Write a program to capitalize first letter of every word in a file
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[100], outputFileName[100];
    char ch;
    int isFirst = 1; // Flag to check if it is the first character of a word

    // Get input file name from the user
    printf("Enter the name of the input file: ");
    scanf("%s", inputFileName);

    // Open input file in read mode
    inputFile = fopen(inputFileName, "r");

    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Get output file name from the user
    printf("Enter the name of the output file: ");
    scanf("%s", outputFileName);

    // Open output file in write mode
    outputFile = fopen(outputFileName, "w");

    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 2;
    }

    // Capitalize the first letter of every word and write to the output file
    while ((ch = fgetc(inputFile)) != EOF) {
        if (isFirst && isalpha(ch)) {
            ch = toupper(ch);
            isFirst = 0;
        } else if (ch == ' ' || ch == '\n' || ch == '\t') {
            isFirst = 1;
        }

        fputc(ch, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("File processing successful.\n");

    return 0;
}
