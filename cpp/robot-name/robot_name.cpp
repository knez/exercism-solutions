#include "robot_name.h"

namespace robot_name {

std::unordered_set<std::string> robot::robots;

robot::robot()
{
    reset();
}

std::string robot::name() const
{
    return robotName;
}

void robot::reset()
{
    std::string newName;
    do
    {
        newName = generateName();
    }
    while (!robots.insert(newName).second);
    
    robotName = newName;
}

std::string robot::generateName()
{
    std::string str(5, ' ');
    str[0] = std::rand() % 26 + 'A';  // uppercase 
    str[1] = std::rand() % 26 + 'A';  // uppercase
    str[2] = std::rand() % 10 + '0';  // digit
    str[3] = std::rand() % 10 + '0';  // digit
    str[4] = std::rand() % 10 + '0';  // digit
    return str;
}

}  // namespace robot_name
