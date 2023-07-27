// A simple calculator that can do calculator operations
// By: Ethan Lima
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void operationOptions(char choice, float num, float num2) {
    switch (choice) {
        case '+':
        printf("Result: %f", num + num2);
        break;

        case '-':
        printf("Result: %f", num - num2);
        break;

        case '*':
        printf("Result: %f", num * num2);
        break;

        case '/':
        printf("Result: %f", num / num2);
        break;

        case 'a':
        printf("Result: %f", (num + num2) / 2.0);
        break;

        case 's':
        printf("Result: %f", pow(num, 2));
        break;

        case 'r':
        printf("Result: %f", sqrt(num));
        break;

        case 'u':
        printf("Result: %f", pow(num, 3));
        break;

        case 'e':
        printf("Result: %f", exp(num));
        break;

        case '^':
        printf("Result: %f", pow(num, num2));
        break;

        case 'c':
        printf("Result (1 if true, 0 if false): %d", num > num2);
        break;

        default:
        printf("Please input an operation");
    }
}

int main() {
    float num = 0, num2 = 0;
    char choice;
    
    printf("+: add numbers\n-: subtract numbers\n*: multiply numbers\n/: divide numbers\na: averages numbers\ns: squares the first number\nr: square root the first number\nu: cube the first number\ne: Euler exponential form (e^x)\n^: exponent form (x^y)\nc: compares numbers (checks if the first is bigger than the second)\n");
    printf("Input choice: ");
    scanf("%c", &choice);
    printf("Input number: ");
    scanf("%f", &num);

    // The square, square root, cubed and Euler exponential form operations do not require a second number to be inputted
    if ((int) choice != 's' && (int) choice != 'r' && (int) choice != 'u' && (int) choice != 'e') {
        printf("Input second number: ");
        scanf("%f", &num2);
    }

    operationOptions(choice, num, num2);
}