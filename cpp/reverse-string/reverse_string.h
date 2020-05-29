#if !defined(REVERSE_STRING_H)
#define REVERSE_STRING_H

#include <string>

namespace reverse_string {

inline std::string reverse_string(const std::string& str)
{
    return std::string(str.rbegin(), str.rend());
}

}  // namespace reverse_string

#endif // REVERSE_STRING_H
