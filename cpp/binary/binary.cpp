#include "binary.h"

namespace binary {

int convert(const std::string& bitStr)
{
    int decimal = 0;
    int exp = bitStr.length() - 1;

    for (char bit : bitStr)
    {
        if (!isdigit(bit))
            return 0;
        decimal += (bit - '0') << exp--;
    }

    return decimal;
}

}  // namespace binary
