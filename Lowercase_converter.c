//WAP TO CONVERT THE CONTENT OF FILE IN LOWERCASE
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[100], outputFileName[100];
    char ch;

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

    // Convert content to lowercase and write to the output file
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(tolower(ch), outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("File content converted to lowercase successfully.\n");

    return 0;
}
