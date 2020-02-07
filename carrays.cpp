/*
    carrays.cpp

    Definitions of c-array parameter examples
*/

#include "carrays.hpp"

// average of elements in the first size elements of the array ar
double average(int ar[], int size) {

    int total = 0;
    for (int i = 0; i < size; ++i)
        total += ar[i];

    return (double) total / size;
}
