#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);  // input string (no spaces)

    int lastIndex[256];   // to store last index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;  // length of longest substring
    int start = 0;   // start index of current window

    for (int i = 0; i < strlen(s); i++) {
        // if current character is already seen
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i;

        int currentLen = i - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Length of the longest substring without repeating characters = %d\n", maxLen);
    return 0;
}
