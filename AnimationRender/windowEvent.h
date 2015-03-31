#pragma once
#include "stdafx.h"

using namespace ShapeLibrary;

namespace WindowRender
{
	class WindowEvent : public IWindowEvent
	{
	public:
		WindowEvent();
		WindowEvent(const WIN_EVENEMENT & _eventType);
		WIN_EVENEMENT getEventType() const;

	private:
		WIN_EVENEMENT eventType;

	};
}