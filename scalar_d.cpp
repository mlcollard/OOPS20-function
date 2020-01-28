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

int main() {

    {
        int test1 = 100;
        int test2 = 90;
        double score = average(test1, test2);
        assert(score == 95.0);
    }

    {
        assert(average(100, 90) == 95.0);
    }

    {
        assert(pay(10.0, 15.0) == 150.0);
        assert(pay(-10.0, 15.0) == -1);
        assert(pay(10.0, -15.0) == -1);
        assert(pay(-10.0, -15.0) == -1);
    }

    return 0;
}














