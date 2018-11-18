//
// Created by Amandus Butzer on 11/12/2018.
//

#include <iostream>
#include <cmath>

using namespace std;

/**
 * 
 * @param a - second last fibonacci result
 * @param b - last fibonacci result
 * @param i - current iteration
 * @param n - max iteration
 * @return
 */
int recLoop(int a, int b, int i, int n) {
    cout << a << endl;
    if (i == n)
        return b;
    else
        recLoop(b, a + b , ++i, n);
}

/**
 * prints the result of the fibonacci sequence to cout
 * negative input numbers will be converted to positive
 * @param n - number to calculate fibonacci sequence for
 */
int fibonacciI(int n) {
    int f1 = 0;
    int f2 = 1;
    switch (abs(n)) {
        case 1:
            return f1;
        case 2:
            cout << f1 << endl;
            return f2;
        default:
            int i = 2;
            return recLoop(f1, f2, i, n);
    }
}

int main(int argc, char *argv[]) {
    int x = 0;
    while (x < 1) {
        cout << "Enter an integer to calculate the fibonacci sequence from: " << flush;
        cin >> x;
        if (x < 1)
            cout << "The number has to an integer greater than 0" << endl;
    }
    int f = fibonacciI(x);
    cout << "Result : " << f << endl;
    return 0;
}