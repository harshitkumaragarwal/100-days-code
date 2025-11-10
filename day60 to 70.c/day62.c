#include <stdio.h>
#include <limits.h>  // for INT_MIN

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = INT_MIN;   // To store the final maximum sum
    int curr_sum = 0;        // To store current running sum

    for (int i = 0; i < n; i++) {
        curr_sum += arr[i];

        if (curr_sum > max_sum)
            max_sum = curr_sum;

        // If current sum drops below 0, reset it
        if (curr_sum < 0)
            curr_sum = 0;
    }

    printf("Maximum subarray sum = %d\n", max_sum);
    return 0;
}
