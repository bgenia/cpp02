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
