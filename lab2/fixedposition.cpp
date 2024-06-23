#include <stdio.h>
#include <math.h>

// Define the function g(x) such that x = g(x)
double g(double x) {
    return cos(x); // Example function: g(x) = cos(x)
}

// Function to find the root using the Fixed-Point Iteration Method
double fixed_point_iteration(double x0, double tol, int max_iter) {
    double x1;
    int iter = 0;

    while (iter < max_iter) {
        x1 = g(x0);

        // Check if the found root is accurate enough
        if (fabs(x1 - x0) < tol) {
            return x1;
        }

        x0 = x1;
        iter++;
    }

    printf("The method did not converge within the maximum number of iterations.\n");
    return x1;
}

int main() {
    double x0 = 0.5, tol = 0.0001;
    int max_iter = 1000;

    double root = fixed_point_iteration(x0, tol, max_iter);

    if (root != -1) {
        printf("The root is: %lf\n", root);
    }

    return 0;
}
