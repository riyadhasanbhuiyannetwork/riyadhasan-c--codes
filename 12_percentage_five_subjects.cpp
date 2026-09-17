#include <iostream>
using namespace std;

int main() {
    double s1, s2, s3, s4, s5;
    cout << "Enter marks for 5 subjects (out of 100 each): " << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    double total = s1 + s2 + s3 + s4 + s5;
    double percentage = (total / 500.0) * 100;

    cout << "Total marks = " << total << " out of 500" << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}
