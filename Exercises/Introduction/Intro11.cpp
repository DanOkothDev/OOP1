#include <iostream>
#include <math.h>

using namespace std;
int main(){
    double num, square, cube, squareRoot, cubeRoot;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;
    cube = square * num;
    squareRoot = sqrt(num);
    cubeRoot = cbrt(num);

    cout << "The square is: " << square << endl;
    cout << "The cube is: " << cube << endl;
    cout << "The square root is: " << squareRoot << endl;
    cout << "The cube root is: " << cubeRoot << endl;

    return 0;
}
