#include <stdio.h>

double linearInterpolation(double x1, double y1, double x2, double y2, double x) {
    // Calculate the slope
    double m = (y2 - y1) / (x2 - x1);

    // Calculate the y-coordinate using the equation of a line
    double y = y1 + m * (x - x1);

    return y;
}

int main() {
    double x1, y1, x2, y2, x;

    // Get the input values
    printf("Enter the x and y coordinate of the first point: ");
    scanf("%lf %lf", &x1,&y1);

    printf("Enter the x and y coordinate of the second point: ");
    scanf("%lf %lf", &x2,&y2);

    printf("Enter the x-coordinate for interpolation: ");
    scanf("%lf", &x);
    // x1 = 2.0;
    // y1 = 4.0;
    // x2 = 5.0;
    // y2 = 9.0;

    // Perform linear interpolation
    double interpolatedY = linearInterpolation(x1, y1, x2, y2, x);

    // Output the result
    printf("The interpolated y-coordinate is: %lf\n", interpolatedY);

    return 0;
}