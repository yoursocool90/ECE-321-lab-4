#ifndef rect_h
#pragma once
#define rect_h

class Rectangle
{
public:

	int width;
	int height;

	Rectangle(int, int);

	int area() {return width*height;}

	int get_width() { return width;}

	int get_height() {return height;}

	int set_width(int) { return 0; }

	int set_height(int) { return 0; }

	int perimeter() { return 2 * height + 2 * width; }

	Rectangle() {};
	Rectangle operator = (Rectangle);

};

#endif