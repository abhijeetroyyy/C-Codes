// Write a program to find the number of lines in a text file in c
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lineCount = 0;

    // Get file name from the user
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open file in read mode
    file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Count lines in the file
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    // Close the file
    fclose(file);

    printf("Number of lines in the file: %d\n", lineCount);

    return 0;
}
