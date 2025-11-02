#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input k
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    if(k > n || k <= 0) {
        printf("Invalid value of k.\n");
        return 0;
    }
    
    int maxSum = -1000000; // Initialize to a small number
    
    // Brute force: find sum of all subarrays of size k
    for(int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for(int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
    
    return 0;
}
