#include "series.h"

#include <stdexcept>

namespace series {

std::vector<int> digits(const std::string& str)
{
    std::vector<int> res;
    for (auto c : str) 
        res.push_back(c - '0');
    return res;
}

std::vector<std::vector<int>> slice(const std::string& str, size_t len)
{
    if (len > str.length())
        throw std::domain_error("Not enough digits to slice");

    std::vector<std::vector<int>> res;
    for (size_t pos = 0; pos + len <= str.length(); pos++)
    {
        std::string sub = str.substr(pos, len);
        res.push_back(digits(sub));
    }

    return res;
}

}  // namespace series
