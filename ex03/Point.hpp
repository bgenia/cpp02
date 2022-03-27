#pragma once

#include <Fixed.hpp>

class Point
{
public:
    Point();
    Point(const float x, const float y);

    Point(const Point& that);

    ~Point();

    void swap(Point& that);

    Point& operator=(Point that);

    const Fixed& getX() const;
    const Fixed& getY() const;

    void setX(const Fixed& value);
    void setY(const Fixed& value);

private:
    Fixed x, y;
};
