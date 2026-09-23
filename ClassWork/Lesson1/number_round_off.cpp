#include <iostream>
using namespace std;

int main() {
    double my_num;

    cout << "Enter a number: ";
    cin >> my_num;

    cout.setf(ios::fixed);// setf set a flag, two possible states
    cout.setf(ios::showpoint);// ios (Input Output Stream) Fixed:
    cout.precision(4);

    cout << "\nThe number you entered was " << my_num << "\n\n";

    return 0;
}
