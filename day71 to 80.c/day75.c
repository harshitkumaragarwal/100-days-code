#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char newText[500];

    printf("Enter filename to append text: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    // Clear input buffer before fgets
    getchar();

    printf("Enter the new line to append: ");
    fgets(newText, sizeof(newText), stdin);

    // Append text to the file
    fputs(newText, fp);

    printf("Text appended successfully!\n");

    fclose(fp);
    return 0;
}
