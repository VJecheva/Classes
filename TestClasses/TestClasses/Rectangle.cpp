#include "Rectangle.h"

int Rectangle::area() const
{
	return a * b;
}

int Rectangle::perimeter() const
{
	return 2 * (a + b);
}

void Rectangle::setB(int value)
{
	this->b = value;
}
