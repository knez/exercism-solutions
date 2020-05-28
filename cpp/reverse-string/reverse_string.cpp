#include "reverse_string.h"

#include <algorithm>

namespace reverse_string {

std::string reverse_string(std::string str)
{
    auto left = str.begin();
    auto right = str.end() - 1;
    
    while (left < right)
    {
        std::iter_swap(left++, right--);
    }

    return str;
}

}  // namespace reverse_string
