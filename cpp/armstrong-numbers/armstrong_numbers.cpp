#include "armstrong_numbers.h"

#include <cmath>

namespace armstrong_numbers {

bool is_armstrong_number(int num)
{
    int sum = 0;
    int length = ceil(log10(num));

    for (int exp = 1; exp <= num; exp *= 10)
    {
        int digit = (num / exp) % 10;
        sum += pow(digit, length);  
    }

    return sum == num;
}

}  // namespace armstrong_numbers
