#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str); 
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("String after replacing spaces: %s\n", str);

    return 0;
}
