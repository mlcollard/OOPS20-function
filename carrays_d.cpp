/*
    carrays_d.cpp

    Parameter passing for c-arrays
*/

#include "carrays.hpp"
#include <cassert>
#include <cstdio>
int main() {

    {
        // average() with c-array and size
        int ar[] = { 1, 2, 3, 4, 5 };
        assert(average(ar, 2) == 1.5);
        assert(average(ar, 3) == 2.0);
        assert(average(ar, 4) == 2.5);
        assert(average(ar, 5) == 3.0);
        assert(average(ar + 1, 2) == 2.5);
        assert(average(ar + 2, 2) == 3.5);
        assert(average(ar + 3, 2) == 4.5);
        assert(average(ar + 1, 3) == 3.0);
        assert(average(ar + 2, 3) == 4.0);
        assert(average(ar + 1, 4) == 3.5);
    }

    {
        // average() with c-iterators
        int ar[] = { 1, 2, 3, 4, 5 };
        assert(average(ar, ar + 1) == 1.0);
        assert(average(ar, ar + 2) == 1.5);
        assert(average(ar, ar + 3) == 2.0);
        assert(average(ar, ar + 4) == 2.5);
        assert(average(ar, ar + 5) == 3.0);
        assert(average(ar + 1, ar + 2) == 2.0);
        assert(average(ar + 2, ar + 3) == 3.0);
        assert(average(ar + 3, ar + 4) == 4.0);
    }

    return 0;
}
