#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter %d elements (sorted): ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter %d elements (sorted): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < m && j < n) {
        if (a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    // Copy remaining elements
    while (i < m)
        merged[k++] = a[i++];

    while (j < n)
        merged[k++] = b[j++];

    printf("Merged sorted array:\n");
    for (int x = 0; x < m + n; x++)
        printf("%d ", merged[x]);
    printf("\n");

    return 0;
}
