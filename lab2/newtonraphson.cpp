#include <stdio.h>
#include <math.h>

// Define the function for which we are finding the root
double f(double x) {
    return x * x  - 4 * x - 10; // Example function: f(x) = x^2 - 4x - 10
}

// Define the derivative of the function
double df(double x) {
    return 2 * x - 4; // Derivative: f'(x) = 2x - 4
}

// Function to find the root using the Newton-Raphson Method
double newton_raphson(double x0, double tol, int max_iter) {
    double x1;
    int iter = 0;

    while (iter < max_iter) {
        x1 = x0 - f(x0) / df(x0);

        // Check if the found root is accurate enough
        if (fabs(f(x1)) < tol) {
            return x1;
        }

        x0 = x1;
        iter++;
    }

    printf("The method did not converge within the maximum number of iterations.\n");
    return x1;
}

int main() {
    double x0 = -20, tol = 0.0001;
    int max_iter = 1000;

    double root = newton_raphson(x0, tol, max_iter);

    if (root != -1) {
        printf("The root is: %lf\n", root);
    }

    return 0;
}
