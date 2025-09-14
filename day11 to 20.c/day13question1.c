#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
