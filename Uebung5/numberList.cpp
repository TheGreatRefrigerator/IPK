//
// Created by Amandus Butzer on 11/25/2018.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

using namespace std;

/**
 * Outputs the minimum and maximum values of a double vector
 * @param v - the vector to analyse
 * @return - the min - max pair
 */
pair<double, double> getMinMax(vector<double> v) {
    if (v.empty()) {
        cout << "The given Vector is empty" << endl;
        return pair<double, double>(0, 0);
    } else {
        double min = *min_element(v.begin(), v.end());
        double max = *max_element(v.begin(), v.end());
        return pair<double, double>(min, max);
    }
}

vector<double> reverseVector(vector<double> v) {
    vector<double> r;
    if (!v.empty()) {
        r.resize(v.size());
        for (int i = 0, j = (int) v.size() - 1; i < v.size(); ++i, --j) {
            r[i] = v[j];
        }
    }
    return r;
}

void roundVector(vector<double> &v) {
    for (double &i : v) {
        i = round(i);
    }
}

// 1e
void reverseVectorByReference(vector<double> &v) {
    if (!v.empty()) {
//      if length of array / 2 - 1 is not 0 take it as valid restriction
//      if it is 0 -> use 1 instead
        for (int i = 0; i < (v.size() / 2 - 1 ? : 1); ++i) {
//          swap 0 with last , 1 with second last ...
            swap(v[i], v[v.size() - (i + 1)]);
        }
    }
}

int main() {
//    1a
    vector<double> v1, v2(10), v3 = {{3, 2, -1, 5, 9, 2}};
    cout << "-- v1 --\n";
    for (double i : v1) {
        cout << i << "  ";
    }
    cout << "\n-- v2 --\n";
    for (auto x : v2) {
        cout << x << "  ";
    }
    cout << "\n-- v3 --\n";
    for (auto x : v3) {
        cout << x << "  ";
    }
    cout << endl;

//    Test 1b
    cout << "\n-- min max of v3 --\n";
    cout << getMinMax(v3).first << " " << getMinMax(v3).second << endl;
    cout << "\n-- reverse v3 ---\n";
    for (auto x : reverseVector(v3)) {
        cout << x << "  ";
    }
    cout << endl;
    vector<double> r = reverseVector(vector<double>{3.2});
    for (auto x : r) {
        cout << x << "  ";
    }
    cout << endl;
    cout << endl;
    cout << "-- round v4 --" << endl;
    vector<double> v4 = vector<double>{3.2, 4.3, 1.5, 2.9};
    for (auto x : v4) {
        cout << x << "  ";
    }
    roundVector(v4);
    cout << endl;
    for (auto x : v4) {
        cout << x << "  ";
    }
    cout << endl;
    cout << "\n-- reverse2 --\n";
    vector<double> r1, r2 = {{1, 2, 3, 4, 5, 6, 7}}, r3 = {{1, 2, 3, 4, 5, 6}};
    for (auto x : r2) {
        cout << x << "  ";
    }
    reverseVectorByReference(r2);
    cout << endl;
    for (auto x : r2) {
        cout << x << "  ";
    }
    cout << endl;

    return 0;
}
