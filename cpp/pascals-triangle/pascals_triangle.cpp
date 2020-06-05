#include "pascals_triangle.h"

namespace pascals_triangle {

std::vector<std::vector<int>> generate_rows(int rows)
{
    std::vector<std::vector<int>> triangle;

    for (int i = 1; i <= rows; i++)
    {
        std::vector<int> row;
        int num = 1; // edge
        for (int j = 1; j <= i; j++)
        {
            row.push_back(num);
            // compute next binomial coefficient
            num = (num * (i - j) / j);
        }
        triangle.push_back(row);
    }    

    return triangle;
}

}  // namespace pascals_triangle
