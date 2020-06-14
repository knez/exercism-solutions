#include "binary_search.h"

#include <stdexcept>

namespace binary_search {

int find(std::vector<int> haystack, int needle)
{
    int low = 0, mid = 0;
    int high = haystack.size() - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (needle == haystack[mid])
            return mid;

        if (needle < haystack[mid])
            high = mid - 1;

        if (needle > haystack[mid])
            low = mid + 1;
    }

    throw std::domain_error("404 Item not found");
}

}  // namespace binary_search
