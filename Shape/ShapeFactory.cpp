#include "stdafx.h"

using namespace ShapeLibrary;

ShapeFactory::ShapeFactory(IWindowAPI & _windowAPI)
{
	windowAPI = &_windowAPI;
}

ShapeFactory::~ShapeFactory()
{

}

Shape & ShapeFactory::createOpenPolyLine() const
{
	OpenPolyline * openPolyLine = new OpenPolyline(*windowAPI);
	return *openPolyLine;
}

Shape & ShapeFactory::createClosedPolyLine() const
{
	ClosedPolyline * closedPolyLine = new ClosedPolyline(*windowAPI);
	return *closedPolyLine;
}

Shape & ShapeFactory::createPolygone() const
{
	Polygon * polygon = new Polygon(*windowAPI);
	return *polygon;
}

Shape & ShapeFactory::createRectangle(const Point & _point, const int _width, const int _height) const
{
	Rectangle * rectangle = new Rectangle(*windowAPI);
	rectangle->setPosition(_point);
	rectangle->setWidth(_width);
	rectangle->setHeight(_height);
	return *rectangle;
}

Shape & ShapeFactory::createCircle(const Point & _point, const int _radius) const
{
	Circle * circle = new Circle(*windowAPI);
	circle->setCenter(_point);
	circle->setRadius(_radius);
	return *circle;
}