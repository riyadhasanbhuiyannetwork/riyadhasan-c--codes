#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << fahrenheit << " Fahrenheit = " << celsius << " Celsius" << endl;
    return 0;
}
