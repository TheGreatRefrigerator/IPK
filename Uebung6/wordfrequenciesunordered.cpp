//
// Created by Amandus Butzer on 12/3/2018.
//

#include <iostream>
#include <iomanip>
#include <chrono>
#include "wordfrequenciesunordered.hh"
#include "sanitizeword.hh"

using namespace std;
using namespace std::chrono;

std::unordered_map<std::string, int> get_unordered_frequencies() {
    unordered_map<string, int> frequencies;
    string s;
    while (cin >> s) {
        s = sanitize_word(s);
        if (s.empty())
            continue;
        if (frequencies.count(s) == 0) {
            frequencies[s] = 1;
        } else {
            frequencies[s]++;
        }
    }
    return frequencies;
}

void print_frequencies(const std::unordered_map<std::string, int> &frequencies) {
    int word_count = 0;
    for (const auto &entry : frequencies) {
        word_count += entry.second;
    }
    for (const auto &entry : frequencies) {
        double percentage = static_cast<double>(entry.second) / word_count;
        cout << left << setw(20) << entry.first << ": "
             << right << setw(10) << entry.second << ' '
             << right << setw(6) << setprecision(5) << percentage * 100 << '%' << endl;
    }
    cout << "Word count: " << word_count << endl;
};

int main() {
    high_resolution_clock::time_point start = high_resolution_clock::now();
    print_frequencies(get_unordered_frequencies());
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start).count();
    cout << duration << endl;
    // 17.531.235 microseconds
    // 0.562.538 microseconds without printing
    return 0;
}