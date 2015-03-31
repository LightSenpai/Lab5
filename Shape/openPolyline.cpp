#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI & _windowAPI)
:Shape(_windowAPI)
{

}

OpenPolyline::~OpenPolyline()
{

}

void OpenPolyline::draw()
{
	if (getNumberOfPoints() < 2) throw runtime_error("Can't draw an OpenPolyLine with less than 2 points.");
	windowAPI->setDrawingColor(lineColor);
	for (int i = 0; i < getNumberOfPoints() - 1; i++)
	{
		windowAPI->drawLine(point.at(i), point.at(i+1));
	}
}

void OpenPolyline::add(Point _point)
{
	point.push_back(_point);
}