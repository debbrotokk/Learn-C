#include <stdio.h>
#include <math.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Recursive function to calculate sin(x) using series expansion
double calculateSinRecursive(double x, int terms, int currentTerm) {
    if (currentTerm == terms)
        return 0;

    double term = pow(-1, currentTerm) * pow(x, 2 * currentTerm + 1) / factorial(2 * currentTerm + 1);

    return term + calculateSinRecursive(x, terms, currentTerm + 1);
}

// Wrapper function for calculateSinRecursive
double calculateSin(double x, int terms) {
    return calculateSinRecursive(x, terms, 0);
}

int main() {
    double angle;
    int n;

    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

angle=(angle*3.1416)/180.0;
    double sinValue = calculateSin(angle, n);

    printf("sin %0.4lf\n", sinValue);

    return 0;
}
