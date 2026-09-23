#include <iostream>
using namespace std;

int main() {
    char gender;
    double salary, tax;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter salary: ";
    cin >> salary;

    if (gender == 'F') {
        if (salary < 15000) {
            tax = salary * 0.12;
        } else {
            tax = salary * 0.14;
        }
    } else {
        if (salary < 14000) {
            tax = salary * 0.13;
        } else {
            tax = salary * 0.15;
        }
    }

    cout << "Tax = " << tax;

    return 0;
}