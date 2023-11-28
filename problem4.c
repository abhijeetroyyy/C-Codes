// Write a program that merges lines alternatively from two files and print the result
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100

void mergeFiles(const char *file1, const char *file2) {
    FILE *inputFile1, *inputFile2;
    char line1[MAX_LINE_LENGTH], line2[MAX_LINE_LENGTH];

    // Open the input files
    inputFile1 = fopen(file1, "r");
    if (inputFile1 == NULL) {
        perror("Error opening file 1");
        exit(1);
    }

    inputFile2 = fopen(file2, "r");
    if (inputFile2 == NULL) {
        perror("Error opening file 2");
        fclose(inputFile1);
        exit(1);
    }

    // Merge lines alternatively and print the result
    while (1) {
        // Read a line from the first file
        if (fgets(line1, MAX_LINE_LENGTH, inputFile1) != NULL) {
            printf("%s", line1);
        } else {
            break; // End of file 1
        }

        // Read a line from the second file
        if (fgets(line2, MAX_LINE_LENGTH, inputFile2) != NULL) {
            printf("%s", line2);
        } else {
            break; // End of file 2
        }
    }

    // Close the files
    fclose(inputFile1);
    fclose(inputFile2);
}

int main() {
    char file1[100], file2[100];

    // Get the names of the input files from the user
    printf("Enter the name of the first file: ");
    scanf("%s", file1);

    printf("Enter the name of the second file: ");
    scanf("%s", file2);

    // Merge and print the lines alternatively
    mergeFiles(file1, file2);

    return 0;
}
