#include "isogram.h"

#include <unordered_set>

namespace isogram {

bool is_isogram(const std::string& str)
{
    std::unordered_set<char> letters;

    for (char ch : str)
    {
        if (!isalpha(ch)) continue;
        auto res = letters.insert(tolower(ch));
        if (!res.second) // duplicate found
            return false;
    }

    return true;
}

}  // namespace isogram
