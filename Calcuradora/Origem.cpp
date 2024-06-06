#include <stdio.h>
#include <math.h>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return num1 / num2;
}

// Function to calculate square root
double sqrt(double num) {
    if (num < 0) {
        printf("Error: Square root of negative number is not allowed.\n");
        return 0;
    }
    return sqrt(num);
}

// Function to calculate square
double square(double num) {
    return num * num;
}

// Function to calculate factorial
double factorial(double num) {
    if (num < 0) {
        printf("Error: Factorial of negative number is not allowed.\n");
        return 0;
    }
    double result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int choice;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Square\n");
    printf("7. Factorial\n");
    printf("8. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            printf("Result: %.2f\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = square(num1);
            printf("Result: %.2f\n", result);
            break;
        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = factorial(num1);
            printf("Result: %.2f\n", result);
            break;
        case 8:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}