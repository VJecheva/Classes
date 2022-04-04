#include "Rectangle.h"

void Rectangle::setA(int x)
{
	x = a;
}

int Rectangle::area() const
{
	return a * b;
}

int Rectangle::perimeter() const
{
	return 2 * (a + b);
}
