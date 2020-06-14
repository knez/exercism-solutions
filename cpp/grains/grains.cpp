#include "grains.h"

#include <limits>

namespace grains {

uint64_t total()
{
    // sum of a geometric series, 2^64 - 1
    return std::numeric_limits<uint64_t>::max();
}

uint64_t square(int pos)
{
    return (uint64_t) 1 << (pos - 1);
}

}  // namespace grains
