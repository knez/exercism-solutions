#include "grade_school.h"

namespace grade_school {

school::school()
{
}

void school::add(const std::string& name, int grade)
{
    auto &vec = _roster[grade];
    auto iter = std::lower_bound(vec.begin(), vec.end(), name);
    vec.insert(iter, name);
}

std::vector<std::string> school::grade(int grade) const
{
    if (_roster.count(grade) > 0)
        return _roster.at(grade);
    return std::vector<std::string>();
}

std::map<int, std::vector<std::string>> school::roster() const
{
    return _roster;
}

}  // namespace grade_school
