#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j;
    int sum = 0;

    
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements is: %d\n", sum);

    return 0;
}
