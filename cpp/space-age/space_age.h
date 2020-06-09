#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

    // precomputed planet's years in Earth seconds
    static const double EARTH_YEAR   = 31557600.0;
    static const double MERCURY_YEAR = 0.2408467  * EARTH_YEAR;
    static const double VENUS_YEAR   = 0.6151972  * EARTH_YEAR;
    static const double MARS_YEAR    = 1.8808158  * EARTH_YEAR;
    static const double JUPITER_YEAR = 11.862615  * EARTH_YEAR;
    static const double SATURN_YEAR  = 29.447498  * EARTH_YEAR;
    static const double URANUS_YEAR  = 84.016846  * EARTH_YEAR;
    static const double NEPTUNE_YEAR = 164.79132  * EARTH_YEAR;

class space_age
{
    public:
        space_age(long long _age);
        long long seconds() const;
        double on_mercury() const;
        double on_venus() const;
        double on_earth() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;

    private:
        long long age; // in seconds
};

}  // namespace space_age

#endif // SPACE_AGE_H
