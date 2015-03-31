#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(IWindowAPI & _windowAPI);
		~OpenPolyline();
		virtual void draw();
		virtual void add(Point _point);
	};
}
