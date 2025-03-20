#include <stdio.h>
#include <stdlib.h>

// Function to get a valid number from the user
double getValidNumber() {
    double num;
    while (1) {
        if (scanf("%lf", &num) == 1) {  // Reads a double, ensures valid input
            return num;
        } else {
            printf("Invalid input. Please enter a number: ");
            while (getchar() != '\n');  // Clears the input buffer
        }
    }
}

int main() {
    double num1, num2, result;
    char operation;

    // Prompt user for first number
    printf("Enter first number: ");
    num1 = getValidNumber();

    // Prompt user for operation
    printf("Enter operation (+, -, /, *): ");
    scanf(" %c", &operation);  // Space before %c to ignore whitespace

    // Prompt user for second number
    printf("Enter second number: ");
    num2 = getValidNumber();

    // Perform operation using switch case
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Exit program with error code
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0;
}
