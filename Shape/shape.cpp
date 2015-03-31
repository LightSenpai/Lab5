#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(IWindowAPI & _windowAPI)
{
	windowAPI = &_windowAPI;
}

Shape::~Shape()
{

}

void Shape::setLineColor(const Color & _color)
{
	lineColor = _color;
}

const Color & Shape::getLineColor() const
{
	return lineColor;
}

void Shape::setFillColor(const Color & _color)
{
	fillColor = _color;
}

const Color & Shape::getFillColor() const
{
	return fillColor;
}

Point Shape::getPoint(const int _index) const
{
	return point[_index];
}

int Shape::getNumberOfPoints() const
{
	return point.size();
}

void Shape::draw() const
{
	if (windowAPI == nullptr) throw runtime_error("");
	windowAPI->setDrawingColor(lineColor);
}

void Shape::add(const Point & _point)
{
	point.push_back(_point);
}
