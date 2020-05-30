#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <unordered_set>

namespace robot_name {

class robot
{
    public:
        robot();
        std::string name() const;
        void reset();

    private:
        std::string robotName;
        std::string generateName();
        static std::unordered_set<std::string> robots;
};

}  // namespace robot_name

#endif // ROBOT_NAME_H
