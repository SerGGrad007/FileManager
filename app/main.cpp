#include <iostream>
#include "sum.h"
#include <cassert>

int main() {
    assert(sum<int>(6,7) == 13);
    return 0;
}