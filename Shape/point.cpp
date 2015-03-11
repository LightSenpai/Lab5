#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	if (_x < 0 || _y < 0)
	{
		throw invalid_argument("Coordonate can't be negative.");
	}
}

bool Point::operator == (const Point & point) const
{
	if (this->x == point.x && this->y == point.y)
	{
		return true;
	}
	return false;
}

bool Point::operator != (const Point & point) const
{
	if (!(*this == point)) return true;
	return false; 
}
