//
// Created by Amandus Butzer on 12/2/2018.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <chrono>

#include "io.hh"
#include "statistics.hh"

using namespace std;
using namespace std::chrono;

int main () {
    bool speedTest = false;
    high_resolution_clock::time_point start = high_resolution_clock::now();
    vector<double> normal = normal_distribution(random_seed(), static_cast<int>(pow(10, 7)), 5, 5);
    if (!speedTest) {
        cout << "( ";
        for ( auto i : normal) {
            cout << i << ' ' ;
        }
        cout << ')' << endl;
        cout << "Mean: " << mean(normal) << endl;
        cout << "Median: " << median(normal) << endl;
        cout << "Moment: " << moment(normal, 4) << endl;
    } else {
       // speed test:
        mean(normal);
        median(normal);
        moment(normal, 4);
        standard_deviation(normal);
        cout << "Standard Deviation: " << standard_deviation(normal) << endl;
    }
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>( stop - start ).count();
    cout << duration;
    return 0;
}
