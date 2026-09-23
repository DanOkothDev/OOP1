#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 9 == 0 && number % 2 == 0) {
        cout << "The number is evenly divisible by 9\n";
    } else {
        cout << "The number is not evenly divisible by 9\n";
    }

    return 0;
}
