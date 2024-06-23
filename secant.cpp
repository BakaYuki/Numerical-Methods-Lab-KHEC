#include <stdio.h>
#include <math.h>

// Define the function for which we are finding the root
double f(double x) {
    return x * x * x - 2 * x -5; // Example function: f(x) = x^3 - x^2 + 2
}

// Function to find the root using the Secant Method
double secant_method(double x0, double x1, double tol, int max_iter) {
    double x2;
    int iter = 0;

    while (iter < max_iter) {
        // Calculate the next approximation
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

        // Check if the found root is accurate enough
        if (fabs(f(x2)) < tol) {
            return x2;
        }

        // Update the points
        x0 = x1;
        x1 = x2;

        iter++;
    }

    printf("The method did not converge within the maximum number of iterations.\n");
    return x2;
}

int main() {
    double x0 = 2, x1 = 3, tol = 0.0001;
    int max_iter = 1000;

    double root = secant_method(x0, x1, tol, max_iter);

    if (root != -1) {
        printf("The root is: %lf\n", root);
    }

    return 0;
}
