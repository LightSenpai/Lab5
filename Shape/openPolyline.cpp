#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI & _windowAPI)
{
	this->windowAPI = & _windowAPI;
	numberOfPoints = 0;
}

OpenPolyline::~OpenPolyline()
{

}

void OpenPolyline::draw()
{
	if (numberOfPoints < 2) throw runtime_error("Can't draw an OpenPolyLine with less than 2 points.");
	windowAPI->setDrawingColor(lineColor);
	for (int i = 0; i < numberOfPoints - 1; i++)
	{
		windowAPI->drawLine(point.at(i), point.at(i+1));
	}
}

Color OpenPolyline::getFillColor()
{
	return fillColor;
}

void OpenPolyline::setFillColor(Color _color)
{
	this->fillColor = _color;
}

Color OpenPolyline::getLineColor()
{
	return lineColor;
}

void OpenPolyline::setLineColor(Color _color)
{
	this->lineColor = _color;
}

Point OpenPolyline::getPoint(int _index)
{
	return point[_index];
}

int OpenPolyline::getNumberOfPoints()
{
	return numberOfPoints;
}

void OpenPolyline::add(Point _point)
{
	point.push_back(_point);
	numberOfPoints++;
}