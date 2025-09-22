#include <stdio.h>
int main() {
    int i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num - i; j++) {
            printf(" ");
        }
        for (j = num - i + 1; j <= num; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
