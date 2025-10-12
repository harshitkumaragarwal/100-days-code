#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    for(int startRow = 0; startRow < rows; startRow++) {
        i = startRow;
        j = 0;
        while(i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    for(int startCol = 1; startCol < cols; startCol++) {
        i = rows - 1;
        j = startCol;
        while(i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    printf("\n");
    return 0;
}
