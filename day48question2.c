#include <stdio.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *wordStart, *ptr;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  
    for (ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
    }

    wordStart = str;
    for (ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == ' ') {
            reverseWord(wordStart, ptr - 1);
            wordStart = ptr + 1;
        }
    }
    reverseWord(wordStart, ptr - 1);

    printf("Sentence after reversing words: %s\n", str);

    return 0;
}
