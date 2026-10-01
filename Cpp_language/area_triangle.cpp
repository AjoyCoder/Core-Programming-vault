
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a, b, c;

    cout << "Enter sides a, b, and c: ";
    cin >> a >> b >> c;

    double s = (a + b + c) / 2.0;

    // Calculate area using Heron's formula
    double area = std::sqrt(s * (s - a) * (s - b) * (s - c));

    // Print the area formatted to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area of the triangle = " << area << std::endl;

    return 0;
}
