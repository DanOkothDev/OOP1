#include <iostream>

using namespace std;
int main(){

    double radius, area, circumference;
    const double PI = 22/7.0;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "The area of the circle is: "<< area << endl;
    cout << "The circumference of the circle is: "<< circumference << endl;


    return 0;
}
