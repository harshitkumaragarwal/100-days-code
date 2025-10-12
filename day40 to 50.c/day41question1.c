#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Input string
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // reads a string with spaces

    // Count characters manually
    while(str[count] != '\0') {
        count++;
    }

    printf("The number of characters in the string is: %d\n", count);

    return 0;
}
