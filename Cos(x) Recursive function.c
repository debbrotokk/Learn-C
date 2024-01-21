#include <stdio.h>
#include <math.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Recursive function to calculate cos(x) using series expansion
double calculateCosRecursive(double x, int terms, int currentTerm) {
    if (currentTerm == terms)
        return 0;

    double term = pow(-1, currentTerm) * pow(x, 2 * currentTerm) / factorial(2 * currentTerm);

    return term + calculateCosRecursive(x, terms, currentTerm + 1);
}

// Wrapper function for calculateCosRecursive
double calculateCos(double x, int terms) {
    return calculateCosRecursive(x, terms, 0);
}

int main() {
    double angle;
    int n;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    // Convert angle to radians
    angle = (angle * 3.1416) / 180.0;

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    double cosValue = calculateCos(angle, n);

    printf(" %.3lf\n", cosValue);

    return 0;
}
