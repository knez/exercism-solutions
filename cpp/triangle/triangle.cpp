#include "triangle.h"

#include <algorithm>
#include <stdexcept>
#include <cfloat>
#include <cmath>

namespace triangle {

bool double_equals(double a, double b)
{
    return std::abs(a - b) < DBL_EPSILON;
}

flavor kind(double a, double b, double c)
{
    // check triangle inequality, and make sure all sides are positive
    if (a + b + c <= 2 * std::max({a, b, c}))
        throw std::domain_error("Bad triangle");
    
    if (double_equals(a, b) && double_equals(a, c))
        return flavor::equilateral;
   
    if (!double_equals(a, b) && !double_equals(b, c) && !double_equals(a, c))
        return flavor::scalene;
    else
        return flavor::isosceles; 
}

}  // namespace triangle
