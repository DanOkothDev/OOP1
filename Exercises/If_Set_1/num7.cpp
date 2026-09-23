#include <iostream>
using namespace std;

int main() {
    int choice;
    double length, width, radius, base, height, side3;
    double area, perimeter;
    const double PI = 22/7.0;

    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Right-Angled Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nEnter length: ";
            cin >> length;

            cout << "Enter width: ";
            cin >> width;

            area = length * width;
            perimeter = 2 * (length + width);

            cout << "\nFigure: Rectangle" << endl;
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Area: " << area << endl;
            cout << "Perimeter: " << perimeter << endl;
            break;

        case 2:
            cout << "\nEnter radius: ";
            cin >> radius;

            area = PI * radius * radius;
            perimeter = 2 * PI * radius;

            cout << "\nFigure: Circle" << endl;
            cout << "Radius: " << radius << endl;
            cout << "Area: " << area << endl;
            cout << "Perimeter: " << perimeter << endl;
            break;

        case 3:
            cout << "\nEnter base: ";
            cin >> base;

            cout << "Enter height: ";
            cin >> height;

            cout << "Enter hypotenuse: ";
            cin >> side3;

            area = 0.5 * base * height;
            perimeter = base + height + side3;

            cout << "\nFigure: Right-Angled Triangle" << endl;
            cout << "Base: " << base << endl;
            cout << "Height: " << height << endl;
            cout << "Hypotenuse: " << side3 << endl;
            cout << "Area: " << area << endl;
            cout << "Perimeter: " << perimeter << endl;
            break;

        default:
            cout << "\nInvalid choice!" << endl;
    }

    return 0;
}
