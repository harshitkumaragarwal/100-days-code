#include <stdio.h>

int main() {
    int n;
    
    // Input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int nums[n], answer[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Step 1: Calculate prefix products
    int prefix[n];
    prefix[0] = 1;
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    
    // Step 2: Calculate suffix products
    int suffix[n];
    suffix[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    
    // Step 3: answer[i] = prefix[i] * suffix[i]
    for(int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }
    
    // Print result
    printf("Product of array except self: ");
    for(int i = 0; i < n; i++) {
        if(i != n - 1)
            printf("%d, ", answer[i]);
        else
            printf("%d", answer[i]);
    }
    
    printf("\n");
    return 0;
}
