#pragma once
#include "Shape.h"

// circle is a subclass of Shape
class Circle : public Shape {

	// attributes unique to circle
protected:
	float radius;


public:
	// a constructor that takes in one parameter.
	Circle(float r) {
		radius = r;
	}

	// public methods
	float Area() override;
	float Perimeter() override;


};
