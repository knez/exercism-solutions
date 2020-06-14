#include "pangram.h"

#include <unordered_set>

namespace pangram {

bool is_pangram(const std::string& str)
{
    std::unordered_set<char> alphabet;

    for (const auto& c : str) 
    {
        if (!isalpha(c)) 
            continue;
        alphabet.insert(tolower(c));
    }

    return alphabet.size() == 26;
}

}  // namespace pangram
