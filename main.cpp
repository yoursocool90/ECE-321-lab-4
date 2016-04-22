#include <iostream>
#include "rect.h"

using namespace std;

int main()
{

	// just for testing function purposes
	int width;
	int height;
	cout << "Enter a width and Height" << endl << "Height: ";
	cin >> height;
	cout << "Width: ";
	cin >> width;

	//Calculates area
	Rectangle c1(width, height);
	cout << "Area is: " << c1.area() << endl;


	//Gets height and width
	Rectangle c2(width, height);
	cout << "Height is: " << c2.get_height() << endl;
	cout << "Width is: " << c2.get_width() << endl;

	//Calculate perimiter
	Rectangle c3(width, height);
	cout << "Perimeter is: " << c3.perimeter() << endl;

	// = operator
	Rectangle a(width, height);
	Rectangle b(width, height);
	Rectangle c;
	c = a, b;
	cout << "Copied Rectangle: " << b.height << " , " << b.width << endl;
}