#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int isPalindrome = 1;
    printf("Enter a string: ");
    scanf(" %[^\n]", str); 
    for(i = 0; str[i] != '\0'; i++);
    int len = i;

    for(i = 0, j = len - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
