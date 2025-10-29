#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len, lastSpaceIndex = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    len = strlen(name);

    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
            break;
        }
    }

    printf("Result: ");

    for (i = 0; i < lastSpaceIndex; i++) {
        if ((i == 0 && name[i] != ' ') || (name[i] == ' ' && name[i + 1] != ' ')) {
            printf("%c. ", toupper(name[i + (i == 0 ? 0 : 1)]));
        }
    }

    if (lastSpaceIndex != -1)
        printf("%s", &name[lastSpaceIndex + 1]);

    return 0;
}
