//
// Created by Amandus Butzer on 12/3/2018.
//
#include <cassert>
#include <vector>
#include <iostream>

#include "io.hh"
#include "statistics.hh"

using namespace std;

int main () {
    int errors = 0;

    vector<double> vector1;
    vector<double> vector2 {3, 5, 8, 2};
    vector<double> vector3 {9, 15, 2, 6, 10};
//    cout << (median(vector2) == 4) << endl;
    assert(median(vector1) == 0);
    assert(median(vector2) == 4);
    assert(median(vector3) == 9);
    double meanVector2 = 4.5;
    double meanVector3 = 8.4;
    assert(mean(vector1) == 0);
    assert(mean(vector2) - meanVector2 < 1e-10);
    assert(mean(vector3) - meanVector3 < 1e-10);



    return errors;
}