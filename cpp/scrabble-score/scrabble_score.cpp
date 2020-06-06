#include "scrabble_score.h"

namespace scrabble_score {

int score(const std::string& str)
{
    int score = 0;
    for (const char ch : str)
    {
        score += score_table[tolower(ch)];
    }
    return score;
}

}  // namespace scrabble_score
