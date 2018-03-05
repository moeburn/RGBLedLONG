#ifndef RGBLed_h
#define RGBLed_h

#include "Arduino.h"

enum Mode { 
	COMMON_ANODE, 
	COMMON_CATHODE 
};

class RGBLed {

	public:
		RGBLed(int red, int green, int blue, Mode common);

		void off();

		void brightness(int color[3], int brightness);
		void brightness(int red, int green, int blue, int brightness);

		void flash(int color[3], int duration);
		void flash(int color[3], int onDuration, int duration);

		void flash(int red, int green, int blue, int duration);
		void flash(int red, int green, int blue, int onDuration, int duration);

		void setColor(int color[3]);
		void setColor(int red, int green, int blue);

		void fadeOut(int color[3], int steps, int duration);
		void fadeOut(int red, int green, int blue, int steps, int duration);

		void fadeIn(int color[3], int steps, int duration);
		void fadeIn(int red, int green, int blue, int steps, int duration);

		static int RED[3];
		static int GREEN[3];
		static int BLUE[3];
		static int MAGENTA[3];
		static int CYAN[3];
		static int YELLOW[3];
		static int WHITE[3];

	private:
		int _red, _blue, _green, _common;
		void color(int red, int green, int blue);
		void blink(int red, int green, int blue, int onDuration, int duration);
		void intensity(int red, int green, int blue, int brightness);
		void fade(int red, int green, int blue, int steps, int duration, bool out);
		void fade(int red, int green, int blue, int steps, int duration, int value);

};

#endif