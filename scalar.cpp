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
