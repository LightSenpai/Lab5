#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class ClosedPolyline : public Shape
	{
	public:
		ClosedPolyline(IWindowAPI & _windowAPI);
		~ClosedPolyline();
		virtual void draw() const;
		virtual void add(Point _point);
	};
}