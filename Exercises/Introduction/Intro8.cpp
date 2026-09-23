#include <iostream>

using namespace std;
int main(){

    double metres, kilometres;

    cout << "Enter the measurement in kilometres: ";
    cin >> kilometres;

    metres = kilometres * 1000;

    cout << kilometres <<" kilometers = " << metres << " metres" << endl;

    return 0;
}
