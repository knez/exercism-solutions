#include "pascals_triangle.h"

namespace pascals_triangle {

std::vector<std::vector<int>> generate_rows(int rows)
{
    std::vector<std::vector<int>> triangle;

    for (int i = 0; i < rows; i++)
    {
        std::vector<int> row;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                row.push_back(1);   // edge
            }
            else
            {
                auto prev = triangle[i - 1];
                int num = prev[j - 1] + prev[j];
                row.push_back(num);
            }
        }
        triangle.push_back(row);
    }    

    return triangle;
}

}  // namespace pascals_triangle
