#include <iostream>

using namespace std;
int main(){

    double metres, kilometres, hours, speed;
    int minutes;

    cout << "Enter the distance in metres: ";
    cin >> metres;

    cout << "Enter time taken in minutes: ";
    cin >> minutes;

    kilometres = metres / 1000;
    hours = minutes / 60.0;

    speed = kilometres / hours;

    cout << "Speed is: " << speed << " Km/h" <<endl;

    return 0;
}
