#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int visited[n + 1];   // assuming elements are in range 0..n
    for (int i = 0; i <= n; i++)
        visited[i] = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check repeat in the same iteration
        if (visited[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;   // exit after finding repeated element
        }

        visited[arr[i]] = 1;
    }

    return 0;
}
