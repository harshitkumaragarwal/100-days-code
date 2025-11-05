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
    
    // Check if k is valid
    if (k > n || k <= 0) {
        printf("Invalid window size!\n");
        return 0;
    }
    
    printf("Maximum elements in each subarray of size %d:\n", k);
    
    // Traverse all subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        
        // Find maximum in the current window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        
        printf("%d ", max);
    }
    
    printf("\n");
    return 0;
}
