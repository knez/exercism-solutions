#include "matching_brackets.h"

#include <stack>

namespace matching_brackets {

bool check(const std::string& str)
{
    std::stack<char> st;

    for (const auto c : str)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (st.empty())
                return false; // wrong order

            char token = st.top();
            if (token != c - 1 && token != c - 2)
                return false; // wrong closing bracket
            st.pop();
        } 
    }

    return st.empty();
}

}  // namespace matching_brackets
