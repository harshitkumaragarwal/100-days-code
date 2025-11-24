#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *fp;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file '%s'. File may not exist.\n", filename);
    } else {
        printf("\n--- File Contents ---\n\n");
        char ch;
        
        // Read character by character
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}
