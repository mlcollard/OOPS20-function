/*
    scalar.hpp

    Declaration of scalar function parameter examples
*/

#ifndef INCLUDE_SCALAR_HPP
#define INCLUDE_SCALAR_HPP

#include <vector>

// average of two numbers
double average(int, int);

// pay based on hours and rate
double pay(double hours, double rate);

// pay based on hours and rate
int pay(double hours, double rate, double& amount);

// order two integers
void order(int& n1, int& n2);

// order two integers in a vector
void order(std::vector<int>& v, int index1, int index2);

#endif
