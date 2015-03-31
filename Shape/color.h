#pragma once

namespace ShapeLibrary
{
	class Color {
	public:
		enum COLOR_TYPE
		{
			BLACK = 0x000000,
			BLUE = 0x0000FF,
			BROWN = 0xA52A2A,
			CYAN = 0x00FFFF,
			DARKBLUE = 0x0000A0,
			FUCHSIA = 0xFF00FF,
			GREEN = 0x008000,
			GREY = 0x808080,
			LIGHTBLUE = 0xADD8E6,
			LIME = 0x00FF00,
			MAROON = 0x800000,
			OLIVE = 0x808000,
			ORANGE = 0xFFA500,
			PURPLE = 0x800080,
			RED = 0xFF0000,
			SILVER = 0xC0C0C0,
			WHITE = 0xFFFFFF,
			YELLOW = 0xFFFF00
		};

		enum TRANSPARENCY { INVISIBLE = false, VISIBLE = true };

		Color();
		Color(const COLOR_TYPE & _color);
		Color(const TRANSPARENCY & _visibility);

		int getColorAsInt() const;
		bool isVisible() const;

	private:
		TRANSPARENCY visibility;
		COLOR_TYPE color;
	};
}