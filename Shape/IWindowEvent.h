#pragma once

namespace ShapeLibrary
{
	enum WIN_EVENEMENT{ NONE, QUIT };

	class IWindowEvent
	{
	public:
		virtual WIN_EVENEMENT getEventType() const = 0;

	private:
		WIN_EVENEMENT eventType;

	};

}