#include <stdio.h>

double lagrangeInterpolation(double x[], double y[], int n, double xi) {
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (j != i) {
                term *= (xi - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }
    return result;
}

int main() {
    // Sample data points
    double x[] = {1.0, 2.0, 3.0, 4.0};
    double y[] = {2.0, 4.0, 1.0, 5.0};
    int n = sizeof(x) / sizeof(x[0]);

    // Interpolate at xi = 2.5
    double xi = 2.5;
    double interpolatedValue = lagrangeInterpolation(x, y, n, xi);

    printf("Interpolated value at xi = %.2f: %.2f\n", xi, interpolatedValue);

    return 0;
}