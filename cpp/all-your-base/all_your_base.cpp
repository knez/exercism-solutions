#include "all_your_base.h"

#include <stdexcept>
#include <list>
#include <cmath>

namespace all_your_base {

std::vector<unsigned> convert(unsigned in_base,
                              const std::vector<unsigned >& in_digits,
                              unsigned out_base)
{
    if (in_base < 2 || out_base < 2)
        throw std::invalid_argument("Base cannot be less than 2");

    unsigned num = 0;
    unsigned exp = in_digits.size() - 1;
    for (auto d : in_digits)
    {
        if (d >= in_base)
            throw std::invalid_argument("Digit out of base range");
        num += d * pow(in_base, exp--);
    }
    
    std::list<unsigned> ls;
    while (num != 0)
    {
        ls.push_front(num % out_base);
        num /= out_base; 
    }     

    return std::vector<unsigned>(ls.begin(), ls.end());
}

}  // namespace all_your_base
