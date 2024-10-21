#include <iostream>

// Define macros for MAX and ABS
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int num1 = 10;
    int num2 = 20;

    // Print the maximum of num1 and num2
    std::cout << "The maximum of " << num1 << " and " << num2 << " is " << MAX(num1, num2) << std::endl;

    int num3 = -5;
    int num4 = 3;

    // Print the absolute values of num3 and num4
    std::cout << "The absolute value of " << num3 << " is " << ABS(num3) << std::endl;
    std::cout << "The absolute value of " << num4 << " is " << ABS(num4) << std::endl;

    return 0;
}
