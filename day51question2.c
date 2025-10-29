#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            // Found exact match → first occurrence
            ceilIndex = mid;
            high = mid - 1;  // look for earlier occurrence
        } 
        else if (arr[mid] < x) {
            low = mid + 1;
        } 
        else {
            // arr[mid] > x → potential ceil
            ceilIndex = mid;
            high = mid - 1;
        }
    }

    return ceilIndex;
}

int main() {
    int n, x;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    int index = findCeil(arr, n, x);
    
    if (index == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);
    
    return 0;
}
