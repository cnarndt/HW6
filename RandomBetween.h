//
// Created by Clayton on 11/11/2020.
//

#ifndef HW6_RANDOMBETWEEN_H
#define HW6_RANDOMBETWEEN_H
#include <cstdio>
int RandomBetweenU(int first, int last, std::mt19937& e2);

int RandomBetweenN(int first, int last, std::mt19937& e2);

int RandomBetween(int first, int last);

void PrintDistribution(const std::map<int,int>& numbers);
#endif //HW6_RANDOMBETWEEN_H
