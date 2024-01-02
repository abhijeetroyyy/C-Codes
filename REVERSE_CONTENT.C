//WRITE A PROGRAM TO REVERSE THE CONTENTS OF A FILE AND PRINT IT IN C
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char fileName[100];
    char *content;
    long fileSize;

    // Get file name from the user
    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    // Open file in read mode
    file = fopen(fileName, "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Determine the size of the file
    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Allocate memory to store the content
    content = (char *)malloc(fileSize + 1);

    if (content == NULL) {
        perror("Error allocating memory");
        fclose(file);
        return 2;
    }

    // Read the content of the file
    fread(content, 1, fileSize, file);

    // Close the file
    fclose(file);

    // Null-terminate the content
    content[fileSize] = '\0';

    // Print the reversed content
    printf("Reversed content:\n");

    for (long i = fileSize - 1; i >= 0; i--) {
        printf("%c", content[i]);
    }

    // Free allocated memory
    free(content);

    return 0;
}
