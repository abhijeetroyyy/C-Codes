//Write a program to join two given lines and store them in a new file
#include <stdio.h>
#include <string.h>

int main() {
    char line1[1000], line2[1000], joinedLine[2000];
    FILE *outputFile;
    char outputFileName[100];

    // Get the first line from the user
    printf("Enter the first line: ");
    fgets(line1, sizeof(line1), stdin);

    // Remove the newline character at the end of line1
    line1[strcspn(line1, "\n")] = '\0';

    // Get the second line from the user
    printf("Enter the second line: ");
    fgets(line2, sizeof(line2), stdin);

    // Remove the newline character at the end of line2
    line2[strcspn(line2, "\n")] = '\0';

    // Join the two lines
    strcpy(joinedLine, line1);
    strcat(joinedLine, line2);

    // Get the name of the output file from the user
    printf("Enter the name of the output file: ");
    scanf("%s", outputFileName);

    // Open the output file in write mode
    outputFile = fopen(outputFileName, "w");

    if (outputFile == NULL) {
        perror("Error opening output file");
        return 1;
    }

    // Write the joined line to the output file
    fprintf(outputFile, "%s\n", joinedLine);

    // Close the output file
    fclose(outputFile);

    printf("Lines joined and stored in the file successfully.\n");

    return 0;
}
