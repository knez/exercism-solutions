#if !defined(LEAP_H)
#define LEAP_H

namespace leap {

    inline bool is_leap_year(int year)
    {
         return !(year % 4) && (year % 100 || !(year % 400));
    }

}  // namespace leap

#endif // LEAP_H
