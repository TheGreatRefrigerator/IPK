//
// Created by Amandus Butzer on 12/3/2018.
//
#include <map>
#include <iostream>
#include <iomanip>
#include "letterfrequencies.hh"

using namespace std;

map<char, int> get_frequencies() {
    map<char, int> frequencies;
    while (true) {
        unsigned char c;
        // read in character
        cin >> c;
        // abort if input closed
        if (not cin)
            break;
        // work with c
        if (isalpha(c)) {
            c = static_cast<unsigned char>(toupper(c));
            if (frequencies.count(c) == 0) {
                frequencies[c] = 1;
            } else {
                frequencies[c]++;
            }
        }
    }
    return frequencies;
}

void print_frequencies(const map<char, int> &frequencies) {
    int letter_count = 0;
    for (const auto &entry : frequencies) {
        letter_count += entry.second;
    }
    for (const auto &entry : frequencies) {
        double percentage = static_cast<double>(entry.second) / letter_count;
        cout << entry.first << ": "
             << right << setw(10) << entry.second << ' '
             << right << setw(6) << setprecision(5) << percentage * 100 << '%' << endl;
    }
    cout << "Letter count: " << letter_count << endl;
}

int main() {
    print_frequencies(get_frequencies());
    return 0;
}