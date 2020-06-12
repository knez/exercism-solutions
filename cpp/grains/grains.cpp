#include "grains.h"

namespace grains {

unsigned long long total()
{
    // sum of a geometric series
    return (2ULL << 63) - 1;
}

unsigned long long square(int pos)
{
    return 1ULL << (pos - 1);
}

}  // namespace grains
