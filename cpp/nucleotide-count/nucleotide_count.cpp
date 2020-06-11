#include "nucleotide_count.h"

#include <stdexcept>

namespace nucleotide_count {

counter::counter(const std::string& dna)
{
    for (auto n : dna)
    {
        if (table.count(n) == 0)
            throw std::invalid_argument("Bad dna sequence");
        table[n] += 1;
    }
}

int counter::count(char n) const
{
    if (table.count(n) == 0)  // key not found
        throw std::invalid_argument("Bad nucleotide");
    return table.at(n);
}

std::map<char, int> counter::nucleotide_counts() const
{
    return table;
}

}  // namespace nucleotide_count
