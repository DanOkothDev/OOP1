#include <iostream>

using namespace std;
int main(){

    double celsius, fahrenheit;

    cout << "Enter the temperature in celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5.0) + 32;

    cout << celsius
        << " degree celsius = " << fahrenheit
        << " degree fahrenheit" << endl;

    return 0;
}
