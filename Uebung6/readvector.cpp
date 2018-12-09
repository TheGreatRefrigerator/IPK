//
// Created by Amandus Butzer on 12/2/2018.
//
#include <vector>
#include <iostream>

#include "io.hh"
#include "statistics.hh"

using namespace std;

int main () {
    vector<double> read = read_vector();
    cout << "( ";
    for ( auto i : read) {
        cout << i << ' ' ;
    }
    cout << ')' << endl;
    cout << "Mean: " << mean(read) << endl;
    cout << "Median: " << median(read) << endl;
    cout << "Moment: " << moment(read, 4) << endl;
    cout << "Standard Deviation: " << standard_deviation(read) << endl;
    return 0;
}
