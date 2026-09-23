#include <iostream>
using namespace std;

int main() {
    double gross, tax, netSalary;

    cout << "Enter salary: ";
    cin >> gross;

    if (gross >= 20000) {
        tax =  gross * 0.15;
    } else if (gross >= 10000) {
        tax = gross * 0.10;
    } else {
        tax = 0;
    }

    netSalary = gross - tax;

    cout << "Tax = " << tax << endl;
    cout << "Net Salary = " << netSalary << "\n" << endl;

    return 0;
}
