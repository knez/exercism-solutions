#include "space_age.h"

namespace space_age {

space_age::space_age(long long _age) : age(_age)
{
}

long long space_age::seconds() const
{
    return age;
}

double space_age::on_mercury() const
{
    return age / MERCURY_YEAR;
}

double space_age::on_venus() const
{
    return age / VENUS_YEAR;
}

double space_age::on_earth() const
{
    return age / EARTH_YEAR;
}

double space_age::on_mars() const
{
    return age / MARS_YEAR;
}

double space_age::on_jupiter() const
{
    return age / JUPITER_YEAR;
}

double space_age::on_saturn() const
{
    return age / SATURN_YEAR;
}

double space_age::on_uranus() const
{
    return age / URANUS_YEAR;
}

double space_age::on_neptune() const
{
    return age / NEPTUNE_YEAR;
}

}  // namespace space_age
