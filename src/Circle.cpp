#include "stdafx.h"
#include "Circle.h"


// definition of a method
float Circle::Area() {
	return 3.14f * radius * radius;
}

float Circle::Perimeter() {
	return 2.0 * 3.14f *radius;
}