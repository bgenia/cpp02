#include <Point.hpp>

Point::Point()
    : x(0), y(0)
{
}

Point::Point(const float x, const float y)
    : x(x), y(y)
{
}

Point::Point(const Point& that)
    : x(that.x), y(that.y)
{
}

Point::~Point()
{
}

void Point::swap(Point& that)
{
    x.swap(that.x);
    y.swap(that.y);
}

Point& Point::operator=(Point that)
{
    swap(that);
    return *this;
}

const Fixed& Point::getX() const
{
    return x;
}

const Fixed& Point::getY() const
{
    return y;
}

void Point::setX(const Fixed& value)
{
    x = value;
}

void Point::setY(const Fixed& value)
{
    y = value;
}
