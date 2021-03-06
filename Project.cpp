#include "stdafx.h"
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;


int main()
{
	cout << "Let's print a circle! n\n";
	Circle myCircle(13);
	Rectangle myRectangle(3, 5);
	Square mySquare(7);

	cout << "Circle Area: " << myCircle.Area() << "\n";
	cout << "Circle Perimeter: " << myCircle.Perimeter() << "\n";


	cout << "Rectangle Area: " << myRectangle.Area() << "\n";
	cout << "Rectangle Perimeter: " << myRectangle.Perimeter() << "\n";

	cout << "Square Area" << mySquare.Area() << "\n";
	cout << "Square Perimeter" << mySquare.Perimeter() << "\n";
	cout << "Square Diagonal" << mySquare.Diagonal() << "\n";


    return 0;
}

