#include <stdio.h>

int findPivot(int n) {
    int totalSum = n * (n + 1) / 2;  // sum from 1 to n

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;  // sum from 1 to x
        int rightSum = totalSum - leftSum + x;  // sum from x to n

        if (leftSum == rightSum)
            return x;
    }

    return -1;  // no pivot integer found
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = findPivot(n);

    if (pivot == -1)
        printf("-1\n");
    else
        printf("Pivot integer = %d\n", pivot);

    return 0;
}
