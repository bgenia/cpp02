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

    bool operator<(const Fixed &that) const;
    bool operator>(const Fixed &that) const;
    bool operator<=(const Fixed &that) const;
    bool operator>=(const Fixed &that) const;

    bool operator==(const Fixed &that) const;
    bool operator!=(const Fixed &that) const;

    Fixed operator+(const Fixed& that) const;
    Fixed operator-(const Fixed& that) const;
    Fixed operator*(const Fixed& that) const;
    Fixed operator/(const Fixed& that) const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

private:
    static const int FRACTIONAL_BIT_COUNT = 8;

    int rawBits;
};

std::ostream& operator<<(std::ostream& ostream, const Fixed& value);
