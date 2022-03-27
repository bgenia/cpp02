#pragma once

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &that);

    ~Fixed();

    Fixed& operator=(Fixed that);

    void swap(Fixed& that);

    int getRawBits() const;
    void setRawBits(const int rawBits_);

private:
    static const int FRACTIONAL_BIT_COUNT = 8;

    int rawBits;
};
