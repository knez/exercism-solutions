#include "beer_song.h"

#include <sstream>

namespace beer_song {

std::string verse(int n)
{
    std::stringstream text;

    if (n > 1)
    {
        text << n << " bottles of beer on the wall, " 
             << n << " bottles of beer.\nTake one down and pass it around, "
             << n - 1 << " bottle" << (n > 2 ? "s" : "") << " of beer on the wall.\n";
    }
    else if (n == 1)
    {
        text << "1 bottle of beer on the wall, 1 bottle of beer.\n"
                "Take it down and pass it around, "
                "no more bottles of beer on the wall.\n";
    }
    else
    {
        text << "No more bottles of beer on the wall, no more bottles of beer.\n"
                "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
    }

    return text.str();
}

std::string sing(int start, int stop)
{
    if (start == stop)
        return verse(stop);
    return verse(start) + '\n' + sing(start - 1, stop);
}

}  // namespace beer_song
