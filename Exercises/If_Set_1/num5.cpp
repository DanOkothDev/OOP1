#include <iostream>
using namespace std;

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "NEGATIVE" << endl;
    } else if (number > 0) {
        cout << "POSITIVE" << endl;
    } else {
        cout << "ZERO" << endl;
    }

    return 0;
}
