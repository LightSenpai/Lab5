#include "stdafx.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI & _windowAPI)
:Shape(_windowAPI)
{

}

ClosedPolyline::~ClosedPolyline()
{

}

void ClosedPolyline::draw() const
{
	if (getNumberOfPoints() < 3) throw runtime_error("Can't draw a ClosedPolyLine with less than 3 points.");
	windowAPI->setDrawingColor(lineColor);
	for (int i = 0; i < getNumberOfPoints() - 1; i++)
	{
		windowAPI->drawLine(point.at(i), point.at(i + 1));
	}
	windowAPI->drawLine(point.at(0), point.at(getNumberOfPoints() - 1));
}

void ClosedPolyline::add(Point _point)
{
	point.push_back(_point);
}