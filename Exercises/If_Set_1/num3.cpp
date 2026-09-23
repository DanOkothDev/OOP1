#include <iostream>
using namespace std;

int main() {
    double grossPay, taxRate, taxAmount, netPay;

    cout << "Enter your gross pay: ";
    cin >> grossPay;

    if (grossPay > 40000) {
        taxRate = 0.30;
    } else if (grossPay >= 30000) {
        taxRate = 0.25;
    } else if (grossPay >= 20000) {
        taxRate = 0.15;
    } else if (grossPay >= 10000) {
        taxRate = 0.10;
    } else {
        taxRate = 0.00;
    }

    taxAmount = grossPay * taxRate;
    netPay = grossPay - taxAmount;

    cout << "\nGross Pay: " << grossPay << endl;
    cout << "Tax Amount: " << taxAmount << endl;
    cout << "Net Pay: " << netPay << endl;

    return 0;
}
