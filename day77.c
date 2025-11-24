#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read from input and write uppercase to output
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);   // convert lowercase → uppercase
        fputc(ch, fout);
    }

    printf("Conversion complete! Check output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
