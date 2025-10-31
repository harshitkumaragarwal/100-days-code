#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int count = 0, candidate = -1;

    // 🧠 Step 1: Find potential candidate using Boyer–Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];
        if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    // 🧮 Step 2: Verify candidate actually appears > n/2 times
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("Majority Element: %d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
