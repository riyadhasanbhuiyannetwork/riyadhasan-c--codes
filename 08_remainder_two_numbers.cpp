#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (b == 0) {
        cout << "Cannot divide by zero!" << endl;
    } else {
        cout << "Remainder = " << a % b << endl;
    }
    return 0;
}
