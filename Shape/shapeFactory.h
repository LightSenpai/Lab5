#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class	ShapeFactory
	{
	public:
		ShapeFactory(IWindowAPI & _windowAPI);
		~ShapeFactory();
		Shape & createOpenPolyLine() const;
		Shape & createClosedPolyLine() const;
		Shape & createPolygone() const;
		Shape & createCircle(const Point &_point, const int _radius) const;
		Shape & createRectangle(const Point &_point, const int _width, const int _height) const;
	private:
		IWindowAPI* windowAPI;
	};
}