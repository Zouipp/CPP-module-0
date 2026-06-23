#include <iostream>

class Fixed
{
	private :

		int value;
		static const int nbits = 8;

	public :

		Fixed();
		Fixed(const int value);
		Fixed(const Fixed &copy);
		Fixed::Fixed(const float value);
		Fixed &operator=(const Fixed &otherFixed);
		~Fixed();
		int getRawBits( void );
		void setRawBits(int const raw);
};
