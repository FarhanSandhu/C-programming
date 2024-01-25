#include <stdio.h>
void calculator(){
    int num1, num2;
    char operator;
    while (1) {
        printf("Enter first number: ");
        if (scanf("%d", &num1) !=1) {
            printf("Please enter an integer.\n");
            break;
        }
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        if (scanf("%d", &num2) != 1) {
            printf("Please enter an integer.\n");
            break;
        }

        if (operator == '+') {
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
        } else if (operator == '-') {
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
        } else if (operator == '*') {
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
        } else if (operator == '/') {
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
int main(){
    calculator();
    return 0;
}
