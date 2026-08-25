#include "math_utils.h"

// Function definition
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}