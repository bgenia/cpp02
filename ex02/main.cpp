#include <iostream>

#include <Fixed.hpp>

int main( void ) {
	Fixed a;
	const Fixed b = Fixed((Fixed(5.05f) * Fixed(2)));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	const Fixed& max = Fixed::max(a, b);

	std::cout << max << std::endl;

	std::cout << a + b << std::endl;

	return 0;
}
