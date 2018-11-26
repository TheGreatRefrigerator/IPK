//
// Created by Amandus Butzer on 11/19/2018.
//
#include <iostream>
#include <cmath>

using namespace std;

namespace power {
    bool falseInput(int q, int n) {
        return n < 0 || (q < 0 && n % 2 == 1);
    }

    int iterative(int q, int n) {
        if (falseInput(q, n)) {
            cout << "If Q is negative N needs to be an even number. N has to be greater or equal 0" << endl;
            return 0;
        }
        if (n == 0)
            return 1;
        if (n == 1)
            return q;
        int power = q;
        for (int i = 1; i < n; ++i) {
            power *= q;
        }
        return power;
    }

    int recursive(int q, int n) {
        if (falseInput(q, n)) {
            cout << "If Q is negative N needs to be an even number. N has to be greater or equal 0" << endl;
            return 0;
        }
        q = abs(q);
        if (n != 0) {
             return q * recursive(q, n - 1);
        }
        else {
            return 1;
        }
    }
    int better(int q, int n) {
        if (falseInput(q, n)) {
            cout << "If Q is negative N needs to be an even number. N has to be greater or equal 0" << endl;
            return 0;
        }
        return int(pow(q, n));
    }
}

int main(int argc, char *argv[]) {
    int q, n;
    cout << "Number to raise: " ;
    cin >> q;
    cout << endl << "Exponent to raise the number by: " ;
    cin >> n;

    cout << power::recursive(q,n) << endl;
    return 0;
}
