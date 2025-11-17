#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers between 0 and %d (one number missing):\n", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Calculate expected sum of 0 to n
    int total_sum = n * (n + 1) / 2;

    // Calculate actual sum of array elements
    int actual_sum = 0;
    for (int i = 0; i < n; i++)
        actual_sum += arr[i];

    // Missing number = total_sum - actual_sum
    int missing = total_sum - actual_sum;

    printf("Missing number: %d\n", missing);

    return 0;
}
