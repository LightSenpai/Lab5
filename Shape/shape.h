#pragma once
#include "stdafx.h"
#include "color.h"
#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape(IWindowAPI & _windowAPI);
		virtual ~Shape();
		virtual void draw() const;
		void setLineColor(const Color & _color);
		const Color & getLineColor()const;
		void setFillColor(const Color  & _color);
		const Color & getFillColor() const;
		Point getPoint(const int _index) const;
		int getNumberOfPoints() const;
		virtual void add(const Point & _point);
	protected:
		IWindowAPI* windowAPI;
		vector<Point> point;
		Color lineColor;
		Color fillColor;
	};
}
