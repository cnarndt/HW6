//Clayton Arndt
//11/11/2020
//CS201

#include <iostream>
#include <iomanip>
#include <map>
#include <random>
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


    std::map<int, int> normal;
    for (int i = 0; i < 100000; i++)
    {
        ++normal[RandomBetweenN(first, last, e2)];
    }
    std::cout << "Normal distribution between "<< first<<" and " << last << ":\n";
    PrintDistribution(normal);
    //histogram for uniform distribution
    std::map<int, int> uniform;
    for (int i = 0; i < 100000; i++)
    {
        ++uniform[RandomBetweenU(first, last, e2)];
    }
    std::cout << "Uniform distribution between " << first << " and " << last << ":\n";
    PrintDistribution(uniform);



    std::map<int, int> rand;
    for (int i = 0; i < 100000; i++)
    {
        ++rand[RandomBetween(first, last)];
    }
    std::cout << "Random distribution between " << first << " and " << last << ":\n";
    PrintDistribution(rand);

}