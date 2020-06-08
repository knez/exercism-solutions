#include "sieve.h"

#include <cmath>

namespace sieve {

std::vector<int> primes(int n)
{
    std::vector<bool> sieve(n, true);

    int max = sqrt(n);
    for (int p = 2; p <= max; p++)
    {
        if (sieve[p]) // it's a prime!
        {
            for (int j = p*p; j <= n; j += p)
                sieve[j] = false;
        }
    }

    std::vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
            primes.push_back(i);
    }

    return primes;
}

}  // namespace sieve
