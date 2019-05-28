#include "stdafx.h"
#include "Rectangle.h"

//define yo shit!

float Rectangle::Area()
{
	return height * width;
}

float Rectangle::Perimeter()
{
	return 2 * (height)+2 * (width);
}
