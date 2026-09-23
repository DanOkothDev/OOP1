#include <iostream>
using namespace std;

int main() {
    double vehicleSpeed, speedLimit, excessSpeed, fine;

    cout << "Enter vehicle speed (kph): ";
    cin >> vehicleSpeed;

    cout << "Enter speed limit (kph): ";
    cin >> speedLimit;

    if (vehicleSpeed > speedLimit) {
        excessSpeed = vehicleSpeed - speedLimit;

        if (excessSpeed < 30) {
            fine = 2500;
        } else {
            fine = 4000;
        }
    } else {
        excessSpeed = 0;
        fine = 0;
    }

    cout << "\nVehicle Speed: " << vehicleSpeed << " kph" << endl;
    cout << "Speed Limit: " << speedLimit << " kph" << endl;
    cout << "Excess Speed: " << excessSpeed << " kph" << endl;
    cout << "Fine Levied: Kshs. " << fine << endl;

    return 0;
}
