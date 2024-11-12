#include <stdio.h>

int main(void) {
    // Typecasting examples
    int intVar = 10;
    int intVar2 = 3;
    float floatVar;

    // Integer division
    floatVar = intVar / intVar2; // Integer division
    printf("Integer division (10 / 3): %f\n", floatVar); // Outputs 3.000000

    // Floating point division
    floatVar = (float)intVar / intVar2; // Typecasting
    printf("Floating point division (10.0 / 3): %f\n", floatVar); // Outputs 3.333333

    // Mixed type operations
    char charVar = 'A'; // ASCII value 65
    int result = charVar + 5; // Implicit type conversion
    printf("Character to int (A + 5): %d\n", result); // Outputs 70 (ASCII for 'F')

    // Operator precedence
    int opResult = 5 + 3 * 4; // 5 + (3 * 4)
    printf("Operator precedence (5 + 3 * 4): %d\n", opResult); // Outputs 17

    opResult = (5 + 3) * 4; // (5 + 3) * 4
    printf("Using parentheses ((5 + 3) * 4): %d\n", opResult); // Outputs 32

    return 0;
}
