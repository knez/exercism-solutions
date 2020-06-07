#if !defined(ALL_YOUR_BASE_H)
#define ALL_YOUR_BASE_H

#include <vector>

namespace all_your_base {

std::vector<unsigned> convert(unsigned in_base,
                              const std::vector<unsigned>& in_digits,
                              unsigned out_base);
                                
}  // namespace all_your_base

#endif // ALL_YOUR_BASE_H
