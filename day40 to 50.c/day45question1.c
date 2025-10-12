#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  
    printf("Enter a character to find frequency: ");
    scanf(" %c", &ch);
    while(str[i] != '\0') {
        if(str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}
