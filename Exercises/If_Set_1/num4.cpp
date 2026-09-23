#include <iostream>
using namespace std;

int main() {
    double num1, num2, answer;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        answer = num1 - num2;

        cout << "Answer: " << answer << endl;

    } else if (num2 > num1) {
        answer = num1 / num2;

        cout << "Answer: " << answer << endl;

    } else {
        answer = num1 + num2;

        cout << "Answer: " << answer << endl;
    }

    return 0;
}
