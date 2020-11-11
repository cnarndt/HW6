//Clayton Arndt
//11/11/2020
//CS201

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include "RandomBetween.h"
using std::cout;
using std::cin;
using std::endl;
using std::map;

int main() {
    std::random_device r;

    std::default_random_engine e1(r());
    std::uniform_real_distribution<int> uniform_dist(1, 6);
    int mean = uniform_dist(e1);
    cout<<"Randomly-chosen mean:"<<mean<< '\n';

    std::seed_seq seed2{r(), r(), r(), r(), r(),r(), r(),r()};
    std::mt19937  e2(seed2);
    std::normal_distribution<> normaldist(mean, 2);

    map<int, int> hist;
    for(int n = 0; n < 10000; ++n){
        ++hist[std::round(normal_dist(e2))];
    }
    cout<<"Normal distribution around" << mean << "\n";
    for (auto p : hist){
        cout<< std::fixed<< std::setprecision(1)<< std::setw(2)
        <<p.first<< ' '<< std::string(p.second/200, '*')<< '\n';
    }
}