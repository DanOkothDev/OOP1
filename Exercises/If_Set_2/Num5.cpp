#include <iostream>
using namespace std;

int main() {
    double mark1, mark2, mark3, mark4, mark5;
    double average;

    cout << "Enter mark 1: ";
    cin >> mark1;

    cout << "Enter mark 2: ";
    cin >> mark2;

    cout << "Enter mark 3: ";
    cin >> mark3;

    cout << "Enter mark 4: ";
    cin >> mark4;

    cout << "Enter mark 5: ";
    cin >> mark5;

    average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;

    cout << "Average = " << average << endl;

    if (average >= 75) {
        cout << "Distinction";
    } else if (average >= 65) {
        cout << "Credit";
    } else if (average >= 50) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }

    return 0;
}