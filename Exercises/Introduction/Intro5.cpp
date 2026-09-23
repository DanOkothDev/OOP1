#include <iostream>

using namespace std;
int main(){

    double measurement, metres;

    cout << "Enter the measurement in cm: ";
    cin >> measurement;

    metres = measurement / 100;

    cout << measurement << " cm = " << metres << " metres" << endl;

    return 0;
}
