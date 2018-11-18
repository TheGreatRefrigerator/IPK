//
// Created by Amandus Butzer on 11/10/2018.
//
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
    double a = 0, b = 0, c = 0;
    cout << "a = " << flush;
    cin >> a;
    cout << "b = " << flush;
    cin >> b;
    cout << "c = " << flush;
    cin >> c;
    cout << a << b << c << endl;

//    check no unique solution
    if (a == 0 && b == 0) {
        cout << "There is no unique solution, as y is always " << c << endl;
        return 0;
    }
//    calculate solutions
    double x1, x2;
    x1 = (-b + sqrt(pow(b, b) - 4*a*c))/ (2*a);
    x2 = (-b - sqrt(pow(b, b) - 4*a*c))/ (2*a);
    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;
//    check complex solution

    return 0;
}
