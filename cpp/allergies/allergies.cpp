#include "allergies.h"

namespace allergies {
        
allergy_test::allergy_test(int score)
{
    test_allergies(score);
}

bool allergy_test::is_allergic_to(const std::string& item)
{
    return allergies.count(item);
}

std::unordered_set<std::string> allergy_test::get_allergies()
{
    return allergies;
}

void allergy_test::test_allergies(int score)
{
    if (score & 1)   allergies.insert("eggs");
    if (score & 2)   allergies.insert("peanuts");
    if (score & 4)   allergies.insert("shellfish");
    if (score & 8)   allergies.insert("strawberries");
    if (score & 16)  allergies.insert("tomatoes");
    if (score & 32)  allergies.insert("chocolate");
    if (score & 64)  allergies.insert("pollen");
    if (score & 128) allergies.insert("cats");
}

}  // namespace allergies
