#include <stdio.h>
#include <string.h>
void calculator(){
int num1, num2;
    char operator[10];

    while (1) {
        printf("Enter first number: ");
        if (scanf("%d", &num1) != 1) {
            printf("Please enter an integer.\n");
            fflush(stdin); // Clear input buffer
            continue;
        }

        printf("Enter an operator (+, -, *, /) or 'stop' to exit: ");
        scanf("%s", operator);

        if (strcmp(operator, "stop") == 0) {
            break;
        }

        printf("Enter second number: ");
        if (scanf("%d", &num2) != 1) {
            printf("Please enter an integer.\n");
            fflush(stdin); // Clear input buffer
            continue;
        }
        if (strcmp(operator, "+") == 0) {
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
        } else if (strcmp(operator, "-") == 0) {
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
        } else if (strcmp(operator, "*") == 0) {
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
        } else if (strcmp(operator, "/") == 0) {
            if (num2 != 0) {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        } else {
            printf("Invalid operator.\n");
        }
    }

    printf("Calculator stopped.\n");
}
int main() {
    calculator();
    return 0;
}
