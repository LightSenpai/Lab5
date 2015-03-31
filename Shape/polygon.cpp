#include "stdafx.h"
#include <algorithm>

using namespace ShapeLibrary;

Polygon::Polygon(IWindowAPI & _windowAPI)
:ClosedPolyline(_windowAPI)
{

}

Polygon::~Polygon()
{

}

void Polygon::add(Point _point)
{
	for (int i = 0; i < getNumberOfPoints() - 1; i++)
	{
		if (onSegment(_point, i))
		{
			throw runtime_error("Intersection between lines");
		}
	}
	point.push_back(_point);
}

void Polygon::draw()
{
	ClosedPolyline::draw();
}

bool Polygon::onSegment(Point _point, int _i)
{
	if (_point.x <= max(point[_i].x, point[_i + 1].x) && _point.x >= min(point[_i].x, point[_i + 1].x) &&
		_point.x <= max(point[_i].y, point[_i + 1].y) && _point.x >= min(point[_i].y, point[_i + 1].y))
	{
		return true;
	}
	return false;
}

bool Polygon::intersectLine(Point _point, int _i)
{
	return true;
}