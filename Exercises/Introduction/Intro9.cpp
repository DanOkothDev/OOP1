#include <iostream>

using namespace std;
int main(){
    double grams, kilogram;
    int NumPackages;

    cout << "Enter the weight of the package in grams: ";
    cin >> grams;

    kilogram = grams / 1000;
    NumPackages = 1 / kilogram;

    cout << "The weight of the package is " << kilogram << " kilograms." << endl;
    cout << "It takes " << NumPackages << " such packages to form one kilogram." << endl;

    return 0;
}
