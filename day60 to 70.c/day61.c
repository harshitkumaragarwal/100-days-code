#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input window size
    printf("Enter the window size (k): ");
    scanf("%d", &k);
    
    // Check for valid window size
    if (k > n || k <= 0) {
        printf("Invalid window size!\n");
        return 0;
    }

    printf("First negative integer in each subarray of size %d:\n", k);
    
    // Process each window
    for (int i = 0; i <= n - k; i++) {
        int found = 0; // Flag to check if negative number is found

        // Check each element in the current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; // Stop at the first negative number
            }
        }

        // If no negative number is found
        if (!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}
