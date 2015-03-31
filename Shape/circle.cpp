#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI & _windowAPI)
:Shape(_windowAPI)
{
	radius = 0;
}

Circle::~Circle()
{

}

void Circle::draw() const
{
	if (Shape::getNumberOfPoints() == 0) throw runtime_error("Center have to be initialized.");
	if (fillColor.getColorAsInt() != 16777215)
	{
		if (lineColor.getColorAsInt() != 16777215)
		{
			windowAPI->drawCircle(point[0], radius);
			windowAPI->fillCircle(point[0], radius);
		}
		else
		{
			windowAPI->setDrawingColor(lineColor);
			windowAPI->fillCircle(point[0], radius);
		}
	}
	else
	{
		windowAPI->setDrawingColor(lineColor);
		windowAPI->drawCircle(point[0], radius);
	}
}

void Circle::add(const Point & _point)
{
	throw runtime_error("");
}

void Circle::setCenter(Point _point)
{
	if (point.size() > 0) throw runtime_error("The center is already set.");
	Shape::add(_point);
}

void Circle::setRadius(int _radius)
{
	if (_radius < 0) throw invalid_argument("Radius can't be negative.");
	this->radius = _radius;
}