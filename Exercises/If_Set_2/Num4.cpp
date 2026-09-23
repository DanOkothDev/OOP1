#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Enter x: ";
    cin >> x;

    if (x > 5) {
        y = 4 * x * x * x + 2 * x - 6;
    } else if (x < 5) {
        y = 3 * x * x - 4 * x + 12;
    } else {
        y = 6 * x - 5;
    }

    cout << "y = " << y;

    return 0;
}