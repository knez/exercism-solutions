#include "luhn.h"

#include <algorithm>

namespace luhn {

bool valid(std::string str)
{
    // strip spaces
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    auto it = find_if(str.begin(), str.end(), 
            [](char x) { return !isdigit(x); });

    if (it != str.end() || str.length() < 2)
        return false;   // invalid format

    int sum = 0;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        int digit = str[i] - '0';
        if ((i & 1) == (str.length() & 1)) // alternate
        {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
    }                   

    return sum % 10 == 0;
}

}  // namespace luhn

