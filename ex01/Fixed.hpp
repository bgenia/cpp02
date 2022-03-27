#pragma once
#include <ostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &that);

    Fixed(const int value);
    Fixed(const float value);

    ~Fixed();

    Fixed& operator=(Fixed that);

    void swap(Fixed& that);

    int getRawBits() const;
    void setRawBits(const int rawBits_);

    float toFloat() const;
    int toInt() const;

private:
    static const int FRACTIONAL_BIT_COUNT = 8;

    int rawBits;
};

std::ostream& operator<<(std::ostream& ostream, const Fixed& value);
