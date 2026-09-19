#include <iostream>
using namespace std;

int main() {
    int units;
 cout << "Enter number of units consumed: ";
    cin >> units;

    double bill = 0;

if (units <= 100) {
        bill = units * 5.0;
  } else if (units <= 200) {
        bill = 100 * 5.0 + (units - 100) * 6.5;
             } else {
        bill = 100 * 5.0 + 100 * 6.5 + (units - 200) * 8.0;
    }

    cout << "Electricity Bill = " << bill << endl;
    return 0;
}
