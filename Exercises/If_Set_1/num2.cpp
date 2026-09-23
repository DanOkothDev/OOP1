#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, answer;
    string op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the operator: ";
    cin >> op;

    if (op == "+"){
        answer = num1 + num2;
        cout << "\nThe sum of "<< num1 << " and " << num2 << " is: "<< answer << endl;
    }else if(op == "-"){
        answer = num1 - num2;
        cout << "\nThe difference between "<< num1 << " and " << num2 << " is: "<< answer << endl;

    }else if (op == "*"){
        answer = num1 * num2;
        cout << "\nThe product of "<< num1 << " and " << num2 << " is: "<< answer << endl;
    }else if (op == "/"){
        answer = num1 / num2;
        cout << "\nThe answer of "<< num1 << " divided by " << num2 << " is: "<< answer << endl;
    }else if (op == "%"){
        answer = fmod(num1, num2);
        cout << "\nThe modulus of "<< num1 << " modulus " << num2 << " is: "<< answer << endl;
    }else{
        cout << "Invalid input!!!";
    }
    return 0;
}
