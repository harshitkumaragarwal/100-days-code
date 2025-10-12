#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  
    while(str[i] != '\0') {
        if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if(str[i] == ' ') {
            spaces++;
        } else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
        } else {
            special++;
        }
        i++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}
