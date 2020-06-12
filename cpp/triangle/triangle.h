#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

enum class flavor 
{ 
    equilateral, 
    isosceles, 
    scalene
};

flavor kind(double a, double b, double c);
bool double_equals(double a, double b);

}  // namespace triangle

#endif // TRIANGLE_H
