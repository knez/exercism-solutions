#include "pascals_triangle.h"

namespace pascals_triangle {

int pascal(int row, int col)
{
    if (col == 1) return 1;
    if (row == 1) return 0;
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

std::vector<std::vector<int>> generate_rows(int rows)
{
    std::vector<std::vector<int>> triangle;

    for (int i = 1; i <= rows; i++)
    {
        std::vector<int> row;
        for (int j = 1; j <= i; j++)
        {
            int num = pascal(i, j);
            row.push_back(num);
        }
        triangle.push_back(row);
    }    

    return triangle;
}

}  // namespace pascals_triangle
