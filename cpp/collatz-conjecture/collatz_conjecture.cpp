#include "collatz_conjecture.h"

#include <stdexcept>

namespace collatz_conjecture {

int stepsRec(int n, int cnt)
{
    if (n == 1) 
        return cnt;

    if (n % 2 == 0)
        return stepsRec(n / 2, cnt + 1);
    else
        return stepsRec(3 * n + 1, cnt + 1);
}

int steps(int n)
{
    if (n < 1)
        throw std::domain_error("Wrong input");

    return stepsRec(n, 0);   
}

}  // namespace collatz_conjecture
