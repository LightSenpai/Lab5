#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(IWindowAPI & _windowAPI);
		~OpenPolyline();
		void draw();
		void setLineColor(Color _color);
		Color getLineColor();
		void setFillColor(Color _color);
		Color getFillColor();
		Point getPoint(int _index);
		int getNumberOfPoints();
		void add(Point _point);
	private:
		IWindowAPI* windowAPI;
		vector<Point> point;
		Color lineColor;
		Color fillColor;
		int numberOfPoints;
	};
}
