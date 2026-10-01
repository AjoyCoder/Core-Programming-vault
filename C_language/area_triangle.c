#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    printf("Enter sides a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2.0;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %.2lf\n", area);

    return 0;
}
