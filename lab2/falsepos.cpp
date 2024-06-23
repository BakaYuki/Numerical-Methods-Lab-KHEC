#include <stdio.h>
#include <math.h>

// Define the function for which we are finding the root
double f(double x) {
    return x * x  - 4*x - 10; // Example function: f(x) = x^3 - x^2 + 2
}

// Function to find the root using the False Position Method
double false_position(double x0, double x1, double tol, int max_iter) {
    double x2;
    int iter = 0;

    if (f(x0) * f(x1) >= 0) {
        printf("You have not assumed the right initial points.\n");
        return -1;
    }

    while (iter < max_iter) {
        // Calculate the point that touches x-axis
        x2 = x0 - (f(x0) * (x1 - x0)) / (f(x1) - f(x0));

        // Check if the found root is accurate enough
        if (fabs(f(x2)) < tol) {
            return x2;
        }

        // Update the points
        if (f(x2) * f(x0) < 0) {
            x1 = x2;
        } else {
            x0 = x2;
        }

        iter++;
    }

    printf("The method did not converge within the maximum number of iterations.\n");
    return x2;
}

int main() {
    double x0 = -2, x1 = -1, tol = 0.0001;
    int max_iter = 1000;

    double root = false_position(x0, x1, tol, max_iter);

    if (root != -1) {
        printf("The root is: %lf\n", root);
    }

    return 0;
}
