#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j;
    int distinct = 1; 

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0; 
                break;
            }
        }
        if(!distinct)
            break;
    }

    if(distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
