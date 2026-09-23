#include <iostream>

using namespace std;
int main(){

    double length, width, area, perimeter;


    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "The area of the rectangle is: "<< area << endl;
    cout << "The perimeter of the rectangle is: "<< perimeter << endl;


    return 0;
}
