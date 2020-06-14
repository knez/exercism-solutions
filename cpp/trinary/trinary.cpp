#include "trinary.h"

namespace trinary {

int to_decimal(const std::string& str)
{
    int dec = 0, radix = 3;

    for (char d : str)
    {
        // convert to digit
        d = d - '0'; 
        if (d < 0 || d > 2)
            return 0;
        dec = dec * radix + d;
    }
    
    return dec;
}

}  // namespace trinary
