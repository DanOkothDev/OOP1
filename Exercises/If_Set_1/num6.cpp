#include <iostream>
using namespace std;

int main() {
    double num1, num2, answer;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        if (num2 == 0) {
            cout << "Error: Cannot divide by zero." << endl;
        } else {
            answer = num1 / num2;
            cout << "Result: " << answer << endl;
        }
    } else if (num2 > num1) {
        if (num1 == 0) {
            cout << "Error: Cannot divide by zero." << endl;
        } else {
            answer = num2 / num1;
            cout << "Result: " << answer << endl;
        }
    } else {
        if (num1 == 0) {
            cout << "Error: Cannot divide by zero." << endl;
        } else {
            answer = num1 / num2;
            cout << "Result: " << answer << endl;
        }
    }

    return 0;
}
