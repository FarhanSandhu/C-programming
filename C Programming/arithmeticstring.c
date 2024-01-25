#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calculate(float num1, float num2, char operator) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            printf("Invalid operator\n");
            return 0;
    }
}

int main() {
    char input[100];
    float num1, num2;
    char operator;

    printf("Enter an expression (e.g., 2+3): ");
    fgets(input, sizeof(input), stdin);

    // Extract the numeric values and operator using a for loop
    int i;
    int len = strlen(input);
    int operatorIndex = -1;//creating flag 

    for (i = 0; i < len; i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
            operator = input[i];
            operatorIndex = i;
            break;
        }
    }

    // Check if the operator was found
    if (operatorIndex == -1) {
        printf("Invalid input format\n");
        return 0;
    }

    // Extract the first numeric value
    char num1Str[100];
    int num1Index = 0;
    for (i = 0; i < operatorIndex; i++) {
        num1Str[num1Index++] = input[i];
    }
    num1Str[num1Index] = '\0';
    num1 = atof(num1Str);//converting it into float value.

    // Extract the second numeric value
    char num2Str[100];
    int num2Index = 0;
    for (i = operatorIndex + 1; i < len; i++) {
        num2Str[num2Index++] = input[i];
    }
    num2Str[num2Index] = '\0';
    num2 = atof(num2Str);

    // Perform the calculation and display the result
    float result = calculate(num1, num2, operator);
    printf("Result: %.2f\n", result);

    return 0;
}


