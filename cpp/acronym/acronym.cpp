#include "acronym.h"

#include <regex>

namespace acronym {

std::string acronym(const std::string& str)
{
    std::string acronym = "";

    std::regex expr("\\w+");  // search for words
    std::sregex_iterator iter(str.begin(), str.end(), expr);
    std::sregex_iterator end;

    while (iter != end)
    {
        char first_char = (*iter).str().at(0);
        acronym.push_back(toupper(first_char));
        iter++;
    }

    return acronym;
}

} // namespace acronym
