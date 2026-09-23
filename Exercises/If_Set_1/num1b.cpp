#include <iostream>
using namespace std;

int main() {
    int choice, bottles;
    double price, total;
    string beer;

    cout << "\n*** Jamal and Daughters Pub ***\n\n";
    cout << "   Beer Brand        Price\n";
    cout << "   1) Tusker         100/=\n";
    cout << "   2) Pilsner        120/=\n";
    cout << "   3) Smirnoff Ice   140/=\n";
    cout << "   4) White Cap      90/=\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            beer = "Tusker";
            price = 100;
            break;

        case 2:
            beer = "Pilsner";
            price = 120;
            break;

        case 3:
            beer = "Smirnoff Ice";
            price = 140;
            break;

        case 4:
            beer = "White Cap";
            price = 90;
            break;

        default:
            cout << "Invalid choice. Please choose between 1 and 4.\n";
            return 0;
    }

    cout << "How many bottles of " << beer << " do you want? ";
    cin >> bottles;

    total = price * bottles;

    cout << "\n" << bottles << " bottles of " << beer
         << " will cost you Kshs. " << total << endl;

    return 0;
}
