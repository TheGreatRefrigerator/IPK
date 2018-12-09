//
// Created by Amandus Butzer on 12/2/2018.
//
#include <vector>
#include <iostream>
#include <cmath>
#include <chrono>

#include "io.hh"
#include "statistics.hh"

using namespace std;
using namespace std::chrono;

int main() {
    bool speedTest = false;
    high_resolution_clock::time_point start = high_resolution_clock::now();
    vector<double> uniformVector = uniform_distribution(random_seed(), static_cast<int>(pow(10, 6)), 1, 10);
    if (!speedTest) {
        cout << "( ";
        for (auto i : uniformVector) {
            cout << i << ' ';
        }
        cout << ')' << endl;
        cout << "Mean: " << mean(uniformVector) << endl;
        cout << "Median: " << median(uniformVector) << endl;
        cout << "Moment: " << moment(uniformVector, 4) << endl;
        cout << "Standard Deviation: " << standard_deviation(uniformVector) << endl;
    } else {
        // speed test
        mean(uniformVector);
        median(uniformVector);
        moment(uniformVector, 4);
        standard_deviation(uniformVector);
    }
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start).count();
    cout << duration;
    return 0;
}