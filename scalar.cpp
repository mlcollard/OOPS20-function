/*
    scalar.cpp

    Implement scalar example demonstration
*/

#include "scalar.hpp"

// average of two numbers
double average(int n1, int n2) {

    return (n1 + n2) / 2;
}

// pay based on hours and rate
double pay(double hours, double rate) {

    // hours cannot be negative
    if (hours < 0)
        return -1;

    // rate cannot be negative
    if (rate < 0)
        return -1;

    return hours * rate;
}

// pay based on hours and rate
int pay(double hours, double rate, double& amount) {

    // hours cannot be negative
    if (hours < 0)
        return -1;

    // rate cannot be negative
    if (rate < 0)
        return -1;

    amount = hours * rate;

    return 0;
}

// order two integers
void order(int& n1, int& n2) {

    if (n1 > n2) {
        auto t = n1;
        n1 = n2;
        n2 = t;
    }
}

// order two integers in a vector
void order(std::vector<int>& v, int index1, int index2) {

    order(v[index1], v[index2]);
}









