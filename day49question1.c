#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  

    printf("Initials: ");

    if (name[0] != ' ')
        printf("%c", toupper(name[0]));

    for (i = 0; i < strlen(name); i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c", toupper(name[i + 1]));
    }

    return 0;
}
