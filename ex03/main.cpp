#include <iostream>

#include <Fixed.hpp>
#include <Point.hpp>

#include <bsp.hpp>

int main( void ) {
	const Point a = Point(-1, 0);
	const Point b = Point(1, 0);
	const Point c = Point(0, 1);

	const Point point1 = Point(0, 2);	// outside
	const Point point2 = Point(0, 1);	// on a vertex
	const Point point3 = Point(0, 0.5);	// inside
	const Point point4 = Point(0, 0);	// on an edge

	std::cout << "point1: " << bsp(a, b, c, point1) << std::endl;
	std::cout << "point2: " << bsp(a, b, c, point2) << std::endl;
	std::cout << "point3: " << bsp(a, b, c, point3) << std::endl;
	std::cout << "point4: " << bsp(a, b, c, point4) << std::endl;

	return 0;
}
