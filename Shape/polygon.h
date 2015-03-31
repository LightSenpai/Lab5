#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Polygon : public ClosedPolyline
	{
	public:
		Polygon(IWindowAPI & _windowAPI);
		~Polygon();
		void draw();
		void add(Point _point);
	private:
		bool onSegment(Point _point, int _i);
		bool intersectLine(Point _point, int _i);
	};
}
