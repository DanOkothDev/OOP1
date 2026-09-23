#include <iostream>
using namespace std;
int main()
{
    double first, second, total;

    cout << "Enter the first number and second number: ";
    cin >> first;
    cin >> second;

    total = first + second;

    cout << "\nThe sum of "<< first << " and " << second << " is "<< total << "\n\n";
}
