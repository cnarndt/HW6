#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include "RandomBetween.h"

int RandomBetweenU(int first, int last, std::mt19937& e2){
    std::uniform_int_distribution<> uniform_dist(first, last);
    return (int)std::round(uniform_dist(e2));
}

int RandomBetweenN(int first, int last, std::mt19937& e2){
//calculating mean and standard deviation
    int mean = floor(((first + last) / 2) + .5);
    int stdeviation = floor(((last - mean)/3) +.5);
    std::normal_distribution<> normal_dist(mean, stdeviation);
    return (int)std::round(normal_dist(e2));
}

int RandomBetween(int first, int last){
    int size_range = last - first + 1;
// rand() % size_range int from 0 to size_range - 1.
    return (rand() % size_range) + first;
}

void PrintDistribution(const std::map<int,int>& numbers){
    for (auto p : numbers) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
                  << p.first << ' ' << std::string(p.second / 200, '*') << '\n';\
}
}

