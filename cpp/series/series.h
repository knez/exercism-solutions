#if !defined(SERIES_H)
#define SERIES_H

#include <vector>
#include <string>

namespace series {

std::vector<int> digits(const std::string& str);
std::vector<std::vector<int>> slice(const std::string& str, size_t len);

}  // namespace series

#endif // SERIES_H
