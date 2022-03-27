#include <cmath>

#include <Fixed.hpp>

#include <logutils.hpp>

Fixed::Fixed()
    : rawBits(0)
{
    LOG_CTOR;
}

Fixed::Fixed(const Fixed &that)
    : rawBits(that.rawBits)
{
    LOG_COPY_CTOR;
}

Fixed::Fixed(const int value)
{
    LOG_CTOR;
    rawBits = value << FRACTIONAL_BIT_COUNT;
}

Fixed::Fixed(const float value)
{
    LOG_CTOR;
    rawBits = roundf(value * (1 << FRACTIONAL_BIT_COUNT));
}

Fixed::~Fixed()
{
    LOG_DTOR;
}

Fixed& Fixed::operator=(Fixed that)
{
    LOG_COPY_ASGN;

    swap(that);

    return *this;
}

void Fixed::swap(Fixed& that)
{
    LOG_METHOD;

    int _rawBits = this->rawBits;
    this->rawBits = that.rawBits;
    that.rawBits = _rawBits;
}

int Fixed::getRawBits() const
{
    LOG_METHOD;

    return rawBits;
}

void Fixed::setRawBits(const int rawBits_)
{
    LOG_METHOD;

    rawBits = rawBits_;
}

float Fixed::toFloat() const
{
    return (float)rawBits / (1 << FRACTIONAL_BIT_COUNT);
}

int Fixed::toInt() const
{
    return rawBits / (1 << FRACTIONAL_BIT_COUNT);
}

bool Fixed::operator<(const Fixed &that) const
{
    return rawBits < that.rawBits;
}

bool Fixed::operator>(const Fixed &that) const
{
    return rawBits > that.rawBits;
}

bool Fixed::operator==(const Fixed &that) const
{
    return rawBits == that.rawBits;
}

bool Fixed::operator!=(const Fixed &that) const
{
    return !(*this == that);
}

bool Fixed::operator<=(const Fixed &that) const
{
    return !(*this > that);
}

bool Fixed::operator>=(const Fixed &that) const
{
    return !(*this < that);
}

Fixed Fixed::operator+(const Fixed& that) const
{
    return toFloat() + that.toFloat();
}

Fixed Fixed::operator-(const Fixed& that) const
{
    return toFloat() - that.toFloat();
}

Fixed Fixed::operator*(const Fixed& that) const
{
    return toFloat() * that.toFloat();
}

Fixed Fixed::operator/(const Fixed& that) const
{
    return toFloat() / that.toFloat();
}

Fixed& Fixed::operator++()
{
    rawBits++;
    return *this;
}

Fixed& Fixed::operator--()
{
    rawBits--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed result(*this);
    ++*this;
    return (result);
}

Fixed Fixed::operator--(int)
{
    Fixed result(*this);
    --*this;
    return (result);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

std::ostream& operator<<(std::ostream &ostream, const Fixed &value)
{
    ostream << value.toFloat();
    return ostream;
}
