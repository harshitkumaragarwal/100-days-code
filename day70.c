#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    // Read input string including spaces
    fgets(str, sizeof(str), stdin);

    // Convert first character to uppercase if alphabet
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }

    // Convert rest of characters to lowercase
    for (int i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s", str);

    return 0;
}
