#pragma once

#include "Rectangle.h"

// Square inherits from Rectangle, which inherits from Shape
class Square : public Rectangle {

protected:
	float width;
	float height;

public:
	// super()
	Square(float sideLen) :Rectangle(sideLen, sideLen) {}

	float Diagonal();
	bool AmIReallyASquare();

};