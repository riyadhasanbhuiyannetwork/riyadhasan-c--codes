#include <iostream>
using namespace std;

int main() {
    double basicSalary;
    cout << "Enter basic salary: ";
    cin >> basicSalary;

    double hra = 0.20 * basicSalary;
    double da  = 0.80 * basicSalary;

    double grossSalary = basicSalary + hra + da;

    cout << "HRA = " << hra << endl;
    cout << "DA = " << da << endl;
    cout << "Gross Salary = " << grossSalary << endl;
    return 0;
}
