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

    return 0;
}
