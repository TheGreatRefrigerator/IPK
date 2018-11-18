//
// Created by Amandus Butzer on 11/12/2018.
//

#include <iostream>
#include <cmath>

using namespace std;

void collatz(int zahl) {
    bool br = false;

    do {
        cout << zahl << endl;
        zahl % 2 == 0 ? zahl /= 2 : zahl = zahl * 3 + 1;
        switch (zahl) {
            // All values that end at 1 are positive integers
            case 1:
            // can only be achieved with zahl == 0
            // could also be achieved for zahl == 1/3 but input value is int
            case 0:
            case -1:
            case -5:
            case-17:
                cout << zahl << endl;
                br = true;
                break;
            default:
                break;
        }
    } while (!br);
}

int main(int argc, char *argv[]) {
    int x;
    cout << "Enter an integer: " << flush;
    cin >> x;
    collatz(x);
}