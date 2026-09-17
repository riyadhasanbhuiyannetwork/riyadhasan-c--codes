#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    if (b == 0) {
        cout << "Cannot divide by zero!" << endl;
    } else {
        cout << "Quotient = " << a / b << endl;
    }
    return 0;
}
