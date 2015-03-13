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
		Shape();
		~Shape();
		virtual void draw() = 0;
		virtual void setLineColor(Color _color) = 0;
		virtual Color getLineColor() = 0;
		virtual void setFillColor(Color _color) = 0;
		virtual Color getFillColor() = 0;
		virtual Point getPoint(int _index) = 0;
		virtual int getNumberOfPoints() = 0;
		virtual void add(Point _point) = 0;
	private:
		IWindowAPI* windowAPI;
		vector<Point> point;
		Color lineColor;
		Color fillColor;
	};
}
