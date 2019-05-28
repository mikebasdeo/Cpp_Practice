#include "stdafx.h"
#include "Square.h"
#include <cmath>

float Square::Diagonal()
{
	return width * sqrt(2.0f);
}

bool Square::AmIReallyASquare()
{
	return false;
}

