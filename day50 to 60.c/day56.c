#include <stdio.h>

int main() {
    int n;
    
    // Input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // For each element, find the next greater element
    printf("Next Greater Elements: ");
    for(int i = 0; i < n; i++) {
        int nextGreater = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        // Print in comma-separated format
        if(i != n - 1)
            printf("%d, ", nextGreater);
        else
            printf("%d", nextGreater);
    }
    
    printf("\n");
    return 0;
}
