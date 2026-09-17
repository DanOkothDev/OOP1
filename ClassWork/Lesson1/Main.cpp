#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string model;
    int year;
    int millage;

public:
    Car(string model, int year, int millage)
        :model(model), year(year), millage(millage){}

    void describe() {
        cout << "This " << model << " is a " << year << " model";
    }

};

int main() {
    Car car("Mustang", 2024, 200);
    cout << car.year << endl;
    car.describe();


}
