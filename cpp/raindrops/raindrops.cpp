#include "raindrops.h"

#include <sstream>

namespace raindrops {

std::string convert(int num)
{
    std::stringstream str;

    if (num % 3 == 0) str << "Pling";
    if (num % 5 == 0) str << "Plang";
    if (num % 7 == 0) str << "Plong";

    // if str empty, add digits
    if (str.rdbuf()->in_avail() == 0)
        str << std::to_string(num);

    return str.str();
}

}  // namespace raindrops
