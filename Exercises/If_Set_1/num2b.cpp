#include <iostream>
using namespace std;

int main() {
    double num1, num2, answer;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the operator (+, -, *, /, %): ";
    cin >> op;

    switch (op) {
        case '+':
            answer = num1 + num2;
            cout << "\nThe sum of " << num1 << " and " << num2
                 << " is: " << answer << endl;
            break;

        case '-':
            answer = num1 - num2;
            cout << "\nThe difference between " << num1 << " and " << num2
                 << " is: " << answer << endl;
            break;

        case '*':
            answer = num1 * num2;
            cout << "\nThe product of " << num1 << " and " << num2 << " is: " << answer << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "\nCannot divide by zero!" << endl;
            } else {
                answer = num1 / num2;
                cout << "\n" << num1 << " divided by " << num2 << " is: " << answer << endl;
            }
            break;

        case '%':
            if (num2 == 0) {
                cout << "\nCannot calculate modulus by zero!" << endl;
            } else {
                answer = int(num1) % int(num2);
                cout << "\nThe modulus of " << num1 << " and " << num2 << " is: " << answer << endl;
            }
            break;

        default:
            cout << "\nInvalid operator!" << endl;
    }

    return 0;
}
