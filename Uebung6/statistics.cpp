//
// Created by Amandus Butzer on 12/2/2018.
//
#include <vector>
#include <algorithm>
#include <math.h>

#include "statistics.hh"

double mean(const std::vector<double>& v) {
    if (v.empty()) { return 0;}
    double meanValue = 0;
    for (double i : v) {
        meanValue += i;
    }
    return meanValue / v.size();
}

double median(const std::vector<double> &v) {
    if (v.empty()) { return 0;}
    unsigned long long int n = v.size();
    std::vector<double> sortedV = std::vector<double> (v);
    std::sort(sortedV.begin(), sortedV.end());
    if (v.size() % 2 == 0) {
        return (sortedV[(n/2) - 1] + sortedV[(n/2 + 1) - 1]) * 0.5;
    } else {
        return sortedV[((n+1)/2) - 1];
    }
}

double moment(const std::vector<double> &v, int k) {
    double momentValue = 0;
    for (double i : v) {
        momentValue += pow(i, k);
    }
    return momentValue / v.size();
}

double standard_deviation(const std::vector<double> &v) {
    double sdValue = 0;
    return sdValue;
}
