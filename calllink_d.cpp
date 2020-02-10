/*
    scalar_d.cpp

    Demonstration program for scalar function parameters

    @NOTE The purpose is to demonstrate function design. Much of the
          functionality shown is available elsewhere.

    @NOTE Block statement used to provide separate scope of variables. Each
          of these blocks could be in a separate main()
*/

#include <cassert>
#include "scalar.hpp"
#include <vector>

int main() {

    {
        int test1 = 100;
        int test2 = 90;
        double score = average(test1, test2);
        assert(score == 95.0);
    }

    return 0;
}
