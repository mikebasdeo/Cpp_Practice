#pragma once
#include "Shape.h"

class Rectangle : public Shape {

protected:
	float width;
	float height;

public:
	// constructor
	Rectangle(float h, float w) {
		width = w;
		height = h;
	}

	// public methods
	float Area() override;
	float Perimeter() override;


};
