#include <stdio.h>

int main() {
    int n, i;
    long long product;
    printf("Enter the value of n: ");
    scanf("%d", &n);
   
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i;
    }

    printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
