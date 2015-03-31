#include  "stdafx.h"

using namespace WindowRender;
using namespace ShapeLibrary;

WindowsRender::WindowsRender(IWindowAPI & _windowAPI)
{
	windowAPI = &_windowAPI;
}

void WindowsRender::render()
{
	bool quit = false;
	while (!quit)
	{
		if (windowAPI->hasEvent())
		{
			IWindowEvent* event;
			event = &windowAPI->getEvent();
			WIN_EVENEMENT et = event->getEventType();
			if (et == WIN_EVENEMENT::QUIT)
			{
				quit == true;
			}
			delete event;
		}

		windowAPI->clearScreen();
		this->drawShape();
		windowAPI->displayScreen();
		windowAPI->wait(100);
	}
}

void WindowsRender::attach(Shape & _shape)
{
	shapes.push_back(&_shape);
}

void WindowsRender::putOnTop(Shape &_shape)
{
	Shape* shapeTemp;
	for (int i = 0; i < shapes.size(); i++)
	{
		if (shapes[i] == &_shape)
		{
			shapeTemp = shapes[i];
			shapes.erase(shapes.begin() + i);
			shapes.push_back(shapeTemp);
		}
	}
}

void WindowsRender::drawShape()
{
	for (int i = 0; i < shapes.size(); i++)
	{
		shapes[i]->draw();
	}
}

