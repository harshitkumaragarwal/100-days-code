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
    
    printf("Previous Greater Elements: ");
    
    // For each element, find the previous greater element
    for(int i = 0; i < n; i++) {
        int prevGreater = -1;
        
        // Look to the left side (previous elements)
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }
        
        // Print in comma-separated format
        if(i != n - 1)
            printf("%d, ", prevGreater);
        else
            printf("%d", prevGreater);
    }
    
    printf("\n");
    return 0;
}
