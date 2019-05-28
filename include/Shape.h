// guard to protect from redefining the header multiple times.
#pragma once


// abstract(virtual) method.
class Shape {

	// methods
public:
	// virtual so they can be overridden by subclasses.
	// setting all to 0 makes Shape an abstract class.
	virtual float Area() = 0;
	virtual float Perimeter() = 0;
};