#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI & _windowAPI)
:Shape(_windowAPI)
{
	width = 0;
	height = 0;
}

Rectangle::~Rectangle()
{

}

void Rectangle::draw() const
{
	if (Shape::getNumberOfPoints() == 0) throw runtime_error("Center have to be initialized.");
	if (fillColor.getColorAsInt() != 16777215)
	{
		if (lineColor.getColorAsInt() != 16777215)
		{
			windowAPI->drawRectangle(point[0], width, height);
			windowAPI->fillRectangle(point[0], width, height);
		}
		else
		{
			windowAPI->setDrawingColor(lineColor);
			windowAPI->fillRectangle(point[0], width, height);
		}
	}
	else
	{
		windowAPI->setDrawingColor(lineColor);
		windowAPI->drawRectangle(point[0], width, height);
	}
}

void Rectangle::add(const Point & _point)
{
	throw runtime_error("");
}

void Rectangle::setPosition(Point _point)
{
	if (point.size() > 0) throw runtime_error("The center is already set.");
	Shape::add(_point);
}

void Rectangle::setHeight(int _height)
{
	if (_height < 0) throw invalid_argument("Height can't be negative.");
	this->height = _height;
}

void Rectangle::setWidth(int _width)
{
	if (_width < 0) throw invalid_argument("Width can't be negative.");
	this->width = _width;
}