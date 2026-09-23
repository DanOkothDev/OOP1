#include <iostream>

using namespace std;
int main(){

    int num1, num2, num3, total, product;
    double average;


    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    product = num1 * num2 * num3;
    average = total / 3;

    cout << "The sum is: "<< total << endl;
    cout << "The product is: "<< product << endl;
    cout << "The average is: "<< average << endl;

    return 0;
}
