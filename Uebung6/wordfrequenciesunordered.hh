//
// Created by Amandus Butzer on 12/3/2018.
//

#ifndef UEBUNG6_WORDFREQUENCIESUNORDERED_HH
#define UEBUNG6_WORDFREQUENCIESUNORDERED_HH

#include <unordered_map>

std::unordered_map<std::string,int> get_unordered_frequencies();

void print_frequencies(const std::unordered_map<std::string,int>& frequencies);

#endif //UEBUNG6_WORDFREQUENCIESUNORDERED_HH
