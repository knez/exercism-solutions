#include "hexadecimal.h"

namespace hexadecimal {

int convert(const std::string& str)
{
    int decimal = 0;

    for (char ch : str)
    {
        if (ch >= '0' && ch <= '9')
            ch = ch - '0';
        else if (ch >= 'a' && ch <= 'f')
            ch = ch - 'a' + 10;
        else
            return 0;
        decimal = (decimal << 4) + ch;
    }

    return decimal;
}

}  // namespace hexadecimal
