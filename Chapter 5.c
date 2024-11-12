#include <stdio.h>

#define TRUE 1
#define FALSE 0

// Define a Boolean type
typedef int boolean;

int main(void) {
    // Declare variables of different types
    int integerVar = 10;
    float floatVar = 3.5f; // Use 'f' to specify float literal
    char charVar = 'A';
    // Define 'real' type as float
    typedef float real; // Move typedef inside main or at the top
    real realVar = 2.5f; // Use 'f' for float literal

    // Print the variables
    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);
    printf("Real: %.2f\n", realVar);

    // Demonstrate typecasting
    int numerator = 10;
    int denominator = 3;
    float result = (float)numerator / denominator; // Typecasting
    printf("Result of %d / %d = %.5f\n", numerator, denominator, result);

    // Using the Boolean type
    boolean isTrue = TRUE;
    if (isTrue) {
        printf("The statement is TRUE.\n");
    } else {
        printf("The statement is FALSE.\n");
    }

    return 0;
}

