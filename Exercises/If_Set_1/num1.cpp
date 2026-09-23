#include <iostream>
using namespace std;

int main(){
    int choice, bottles;
    double total;

    cout << "\n*** Jamal and Daughters Pub ***\n" << endl;
    cout << "   Beer Brand        Price\n" << endl;
    cout << "   1) Tusker         100/=" << endl;
    cout << "   2) Pilsner        120/=" << endl;
    cout << "   3) Smirnoff Ice   140/=" << endl;
    cout << "   4) White Cap      90/=" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1){
        cout << "How many bottles of Tusker do you want? ";
        cin >> bottles;
        total = 100 * bottles;
        cout << "\n" << bottles <<" bottles of Tusker will cost you Kshs. " << total << endl;

    }else if (choice == 2){
        cout << "How many bottles of Pilsner do you want? ";
        cin >> bottles;
        total = 120 * bottles;
        cout << "\n" << bottles <<" bottles of Pilsner will cost you Kshs. " << total << endl;

    }else if (choice == 3){
        cout << "How many bottles of Smirnoff Ice do you want? ";
        cin >> bottles;
        total = 140 * bottles;
        cout << "\n" << bottles <<" bottles of Smirnoff Ice will cost you Kshs. " << total << endl;

    }else if (choice == 4){
        cout << "How many bottles of White Cap do you want? ";
        cin >> bottles;
        total = 90 * bottles;
        cout << "\n" << bottles <<" bottles of White Cap will cost you Kshs. " << total << endl;

    }else{
        cout << "Invalid choice please choose between 1 and 4!!!" << endl;
    }



    return 0;
}
