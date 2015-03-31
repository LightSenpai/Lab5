#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle : public Shape
	{
	public:
		Rectangle(IWindowAPI & _windowAPI);
		~Rectangle();

		virtual void draw() const;
		virtual void add(const Point & _point);

		void setPosition(Point _point);
		void setHeight(int _height);
		void setWidth(int _width);
	private:
		int height;
		int width;
	};
}