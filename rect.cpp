#include "rect.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int a, int b)
{
	set_width(width = a);
	set_height(height = b);
	
}


Rectangle Rectangle::operator = (Rectangle AnotherRectangle)
{
	Rectangle temp;
	temp.width = width;
	temp.height = height;
	return(temp);

}

