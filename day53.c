#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    // Step 1: Calculate total sum of array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Step 2: Traverse array and find pivot index
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i;  // leftmost pivot index found
        }

        leftSum += arr[i];
    }

    return -1;  // no pivot found
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivot = findPivotIndex(arr, n);

    if (pivot == -1)
        printf("-1\n");
    else
        printf("Pivot index = %d\n", pivot);

    return 0;
}
