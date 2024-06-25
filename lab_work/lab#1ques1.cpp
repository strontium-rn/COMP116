// Write a C++ program that reads three coefficients a, b and c for quadratic equation and finds
// whether the solutions are in real or imaginary. (ax2  + bx + c = 0 if b2 -4ac >=0 then the solutions are real.)
#include<iostream>
#include<cmath>
using namespace std;

void calculate(int, int, int);

int main() {
    int a, b, c;
    cout << "Enter coefficients a, b, and c:" << endl;
    cin >> a >> b >> c;

    double discriminant = pow(b, 2) - 4 * a * c;
    cout << "Discriminant: " << discriminant << endl;  // Debugging output

    if (discriminant < 0) {
        cout << "The solutions are imaginary" << endl;
    } else {
        calculate(a, b, c);
    }

    return 0;
}

void calculate(int a, int b, int c) {
    double discriminant = pow(b, 2) - 4 * a * c;
    double sqrt_val = sqrt(discriminant);

    cout << "One of the values of the quadratic equation is: " << ((-b + sqrt_val) / (2 * a)) << endl;
    cout << "Other value of the equation is: " << ((-b - sqrt_val) / (2 * a)) << endl;
}


