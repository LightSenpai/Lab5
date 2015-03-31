#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Circle : public Shape
	{
	public:
		Circle(IWindowAPI & _windowAPI);
		virtual ~Circle();

		virtual void draw() const;
		virtual void add(const Point & _point);

		void setCenter(Point _point);
		void setRadius(int _radius);
	private:
		int radius;
	};
}
