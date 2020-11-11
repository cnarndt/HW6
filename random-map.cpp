//Clayton Arndt
//11/11/2020
//CS201

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <vector>
#include "RandomBetween.h"

int main(){
    // Seed with a real random value, if available
    std::random_device r;

// For random Range
    std::default_random_engine e1(r());
    std::default_random_engine e3(r()+1);

    std::uniform_int_distribution<int> uniform_dist(1, 5);
    std::uniform_int_distribution<int> uniform_dist2(6, 10);
//Setting range
    int first = 2;
    int last =25;
    std::seed_seq seed2{r(), r(), r(), r(), r(), r(), r(), r()};
    std::mt19937 e2(seed2);

}