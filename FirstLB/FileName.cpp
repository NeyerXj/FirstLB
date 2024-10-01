#include <iostream>
#include <cmath>

using namespace std;

double calculateY(double x);

void calcSecond() {
    double x_start = -4.0, x_end = 4.0, hx = 0.27;

    for (double x = x_start; x <= x_end; x += hx) {
        double y = calculateY(x);
        cout << "For x = " << x << ", y = " << y << endl;
    }
}

int main() {
    cout << "Input Ex: 0 0 0" << endl; 
    double a, b, t, s;
    cout << "Enter values for a, b, t: ";
    cin >> a >> b >> t;

    double y = exp(-b * t) * sin(a * t + b) - sqrt(b * t + a);

    s = b * sin(a * pow(t, 2) * cos(2 * t)) - 1;

    cout << "y = " << y << endl;
    cout << "s = " << s << endl;
    cout << "Second output:" << endl;

    calcSecond();

    return 0;
}

double calculateY(double x) {
    if (abs(x) <= 3) {
        return pow(sin(x + 0.4), 2) / (4 * pow(x, 2));
    }
    else {
        return pow(x, 4) + 2 * pow(x, 2) * cos(x);
    }
}
